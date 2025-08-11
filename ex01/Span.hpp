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
  Span(const Span &other) = delete;
  Span operator=(const Span &other) = delete;

  void addNumber(int num);
  int shortestSpan() const;
  int longestSpan() const;
};
