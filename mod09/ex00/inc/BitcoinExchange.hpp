#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <time.h>
#include <fstream>
#include <iostream>
#include <sstream>

class BitcoinExchange : public std::map<std::string, float> {
	public:
		BitcoinExchange(std::string path);
		~BitcoinExchange();
	
	private:
		void	_fillDatabase(void);
		void	_readInput(std::string path);
		void	_processLine(std::string arg);
		bool	_validateDate(std::string date);
		float	_getValue(std::string key);
		bool	_errorMsg(std::string msg);
		time_t	_getTimestamp(std::string key);

		std::map<time_t, float>	_database;
		
};

#endif