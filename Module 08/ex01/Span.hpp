#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>

class Span
{
public:
	Span();
    Span(unsigned int);
	~Span();
	Span(Span const &);
	Span &operator=(Span const &);

	void addNumber(int nbr);
	void addNumber(int start, int end);
	int longestSpan(void) const;
	int shortestSpan(void) const;
private:
    std::vector<int> _v;
    unsigned int _maxSize;
};

#endif