#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>
#include <iterator>
template <typename T>
class MutantStack : public std::stack<T>
{
    
    public:
	//Form Canonical
        MutantStack(): std::stack<T>::stack()
        {}
        MutantStack(const MutantStack<T>& other): std::stack<T>::stack(other)
        {}
        MutantStack &operator=(const MutantStack<T> &other)
        {
            std::stack<T>::operator=(other);
        }
        ~MutantStack()
        {}
    //iterator
        typedef typename std::stack<T>::container_type::iterator				iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
		
		iterator begin(void) { return(std::stack<T>::c.begin()); }
		iterator end(void) { return(std::stack<T>::c.end()); }

		reverse_iterator rbegin(void) { return(std::stack<T>::c.rbegin()); }
		reverse_iterator rend(void) { return(std::stack<T>::c.rend()); }
};

#endif

