#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>

class Span
{
    private:
        unsigned int N;
    public:
        Span(void);
        Span(const Span& other);
        Span &operator=(const Span &other);
        ~Span();
        addNumber(int n);
};

#endif

