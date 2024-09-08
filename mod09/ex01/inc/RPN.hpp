#ifndef RPN_HPP
# define RPN_HPP

#include <string>
#include <stack>
#include <unordered_map>
#include <functional>

class RPN : public std::stack<int> {
	public:
		RPN(std::string input);
		~RPN(void);

		class RPNException;
	
	private:
		static std::unordered_map<char, std::function<int(int num1, int num2)>> _operators;
		void	_validateInput(const std::string &input);
		void	_run(const std::string &input);
};

#endif