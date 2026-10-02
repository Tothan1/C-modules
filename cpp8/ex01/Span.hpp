#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
#include <vector>

class Span
{
    private:
        unsigned int N;
        std::vector<int> tab;
    public:
        Span(void);
        Span(const Span& other);
        Span &operator=(const Span &other);
        ~Span();
        Span(unsigned int nb);
        void addNumber(int n);
        void addNumber(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end);
        class SpanFill : public std::exception 
		{
            char const* what() const throw();		
		};

        class SpanSizeToLow : public std::exception 
		{
            char const* what() const throw();		
		};
        int shortestSpan(void);
        int longestSpan(void);
};

#endif

