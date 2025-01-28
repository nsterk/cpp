#include "../inc/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string path) {
	_fillDatabase();
	_readInput(path);
}

BitcoinExchange::~BitcoinExchange(void) {}

void	BitcoinExchange::_fillDatabase(void) {
	std::string	line;
	std::string key;
	float value;

	std::ifstream	ifs("data.csv");
	if (!ifs.is_open()) {
		std::cerr << "Error retrieving database" << std::endl;
		exit(0);
	}

	getline(ifs, line);
	while (getline(ifs, line)) {
		key = line.substr(0, 10);
		value = stof(line.substr(11, line.size() - 11));
		_database[_getTimestamp(key)] = value;
	}

}
void	BitcoinExchange::_readInput(std::string path) {

	std::ifstream	ifs(path);
	if (!ifs.is_open()) {
		std::cerr << "Unable to open file: " << path << std::endl;
		exit(0);
	};

	std::string key;
	getline(ifs, key);

	while (getline(ifs, key)) {
		_processLine(key);
	};

	ifs.close();
}

void	BitcoinExchange::_processLine(std::string arg) {
	std::istringstream line(arg);
	std::string	word;
	std::string key;
	float	amount;
	time_t	timeStamp;

	line >> word;

	if (_validateDate(word))
	 	return ;
	key = word;
	timeStamp = _getTimestamp(key);
	if (_database.lower_bound(timeStamp) == _database.begin())
		_errorMsg("Error: date ")

	line >> word;
	if (word != "|") {
		_errorMsg("Invalid separator");
		return ;
	}
	line >> word;

	if (word.find_first_not_of("0123456789.") != std::string::npos) {
		_errorMsg("Amount to be converted contains invalid characters");
		return ;
	}
	amount = stof(word);

	if (amount < 0 || amount > 1000){
		_errorMsg("Amount to be converted must be between 0 and 1000");
		return ;
	}

	std::cout << key << " => " << amount << " = " << (amount * _getValue(key)) << std::endl;

}

bool	BitcoinExchange::_validateDate(std::string word) {

	int number;
	if (word.size() != 10 || word[4] != '-' || word[7] != '-' || (word.find_first_not_of("0123456789-") != std::string::npos))
		return (_errorMsg("Incorrect date format. Format expected: YYYY-MM-DD"));

	// validate year
	number = stoi(word.substr(0, 4));
	if (number < 2000 || number > 2024)
		return (_errorMsg("Year cannot be negative or in the future"));
	// validate month
	number = stoi(word.substr(5, 2));
	if (number < 1 || number > 12)
		return (_errorMsg("Month value too small (lower than 1) or too high (higher than 12)"));
	//validate day
	number = stoi(word.substr(8, 2));
	if (number < 1 || number > 31)
		return (_errorMsg("Day value too small (lower than 1) or too high (higher than 31)"));
	return (false);
}

float	BitcoinExchange::_getValue(std::string key) {
	time_t timeStamp = _getTimestamp(key);
	if (_database.count(timeStamp))
		return (_database[timeStamp]);

	std::map<time_t, float>::iterator it = _database.lower_bound(timeStamp);
	if (it == _database.begin())
		return (it->second);
	std::map<time_t, float>::iterator it2 = it;
	it--;

	return ((timeStamp - it->first) < (it2->first - timeStamp) ? it->second : it2->second);
}

time_t	BitcoinExchange::_getTimestamp(std::string key) {

	std::tm	t = {};
	std::istringstream dateStream(key);
	dateStream >> std::get_time(&t, "%Y-%m-%d");

	return (std::mktime(&t));
}

bool	BitcoinExchange::_errorMsg(std::string msg) {
	std::cout << "Error: " << msg << std::endl;
	return (true);
}
