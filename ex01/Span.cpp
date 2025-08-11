#include "./Span.hpp"
#include <algorithm>
#include <climits>
#include <cstddef>
#include <stdexcept>

Span::Span(const unsigned int &N) : _N(N) {
  if (N < 2) {
    throw std::runtime_error("N needs to be above 1");
    return;
  }
}

Span::~Span() {}

void Span::addNumber(int num) {
  if (v.size() == _N) {
    throw std::runtime_error("Container is full\n");
    return;
  }
  v.push_back(num);
}

int Span::shortestSpan() const {
  int sSpan = INT_MAX;
  for (size_t i = 0; i < v.size() - 1; ++i)
    sSpan = std::min(sSpan, std::abs(v[i + 1] - v[i]));
  return sSpan;
}

int Span::longestSpan() const {
  int lSpan = INT_MIN;
  for (size_t i = 0; i < v.size() - 1; ++i)
    lSpan = std::max(lSpan, std::abs(v[i + 1] - v[i]));
  return lSpan;
}
