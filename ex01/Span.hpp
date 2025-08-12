#pragma once

#include <vector>

class Span {
private:
  unsigned int _N;
  std::vector<int> v;

public:
  Span() = delete;
  Span(const unsigned int &N);
  ~Span();
  Span(const Span &other) = default;
  Span operator=(const Span &other) = delete;

  void addNumber(int num);
  int shortestSpan() const;
  unsigned int longestSpan() const;

  void theyAreBillions();
  void print() const;
};
