#ifndef RPN_HPP
# define RPN_HPP

#include <string>
#include <stack>
#include <unordered_map>
#include <functional>

/*

std::unordered_map<char, std::function<int(int num1, int num2)>>

std::function<int&()> G([]() -> int& { static int i{0x2A}; return i; });

*/


// # define locationMap std::map<std::string, void(locationParser::*)(std::vector<std::string> &args)>

class RPN : public std::stack<int> {
	public:
		RPN(std::string input);
		~RPN(void);
	
	private:
		static std::unordered_map<char, std::function<int(int num1, int num2)>> _operators;

};

#endif