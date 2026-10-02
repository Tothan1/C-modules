#include "Span.hpp"
#include <algorithm>
#include <iostream>

// Default constructor
Span::Span(void): N(0)
{}

// Copy constructor
Span::Span(const Span &other)
{
    (void) other;
    return ;
}

// Assignment operator overload
Span &Span::operator=(const Span &other)
{
    (void) other;
    return (*this);
}

// Destructor
Span::~Span(void)
{
    return ;
}

Span::Span(unsigned int nb) : N(nb)
{}
// Exception
char const*     Span::SpanFill::what() const throw()
{
    return "Error Span is fill";
}
char const*     Span::SpanSizeToLow::what() const throw()
{
    return "Error Span is to low for calculate the span";
}
void Span::addNumber(int n)
{
    if (tab.size() < N)
        tab.push_back(n);
    else
        throw Span::SpanFill();
}

void Span::addNumber(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end)
{
    if (std::distance(begin, end) + tab.size()<= N)
        tab.insert(tab.end(), begin, end);
    else
        throw Span::SpanFill();
}


int Span::shortestSpan(void)
{
    int short_span;
    if(tab.size() > 1)
    {
        std::sort(tab.begin(), tab.end());
        short_span = tab.back() - *(tab.end() -2);
        for (size_t i =  tab.size() - 1; i > 0; i--)
        {
            if(short_span >tab[i]-tab[i - 1])
                short_span = tab[i]-tab[i - 1];
        }
        return short_span;
    }
    else
        throw Span::SpanSizeToLow();
}
int Span::longestSpan(void)
{
    if(tab.size() > 1)
    {
        std::sort(tab.begin(), tab.end());
        return (tab.back() - tab.front());
    }
    else
        throw Span::SpanSizeToLow();
}