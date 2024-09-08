#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <deque>

/*

Reference: https://en.cppreference.com/w/cpp/container/stack

-Member types-
iterator 				LegacyRandomAccessIterator to value_type
const_iterator 			LegacyRandomAccessIterator to const value_type
reverse_iterator 		std::reverse_iterator<iterator>
const_reverse_iterator 	std::reverse_iterator<const_iterator>

-Member objects-
Container c				The underlying container
 */

  template<class T, class Container = std::deque<T>>
class MutantStack : public std::stack<T, Container> {
	public:
		typedef typename Container::iterator					iterator;
		typedef typename Container::const_iterator				const_iterator;
		typedef typename std::reverse_iterator<iterator>		reverse_iterator;
		typedef typename std::reverse_iterator<const_iterator>	const_reverse_iterator;

		iterator 				begin(void) noexcept { return (this->c.begin());};
		iterator 				end(void) noexcept { return (this->c.end());};
		const_iterator			begin(void) const noexcept { return (this->c.begin());};
		const_iterator			end(void) const noexcept { return (this->c.end());};
		reverse_iterator		rbegin(void) noexcept { return (this->c.rbegin());};
		reverse_iterator		rend(void) noexcept { return (this->c.rend());};
		const_reverse_iterator	rbegin(void) const noexcept { return (this->c.rbegin());};
		const_reverse_iterator	rend(void) const noexcept { return (this->c.rend());};
};

#endif