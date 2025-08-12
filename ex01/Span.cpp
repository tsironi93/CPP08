#include "./Span.hpp"
#include <algorithm>
#include <climits>
#include <cstddef>
#include <exception>
#include <iostream>
#include <ostream>
#include <random>
#include <stdexcept>
#include <vector>

Span::Span(const unsigned int &N) : _N(N) {
  if (N < 2) {
    throw std::runtime_error("N needs to be above 1");
  }
  v.reserve(N);
}

Span::~Span() {}

void Span::addNumber(int num) {
  try {
    if (v.size() == _N) {
      throw std::runtime_error("Container is full");
      return;
    }
    v.push_back(num);
  } catch (std::exception &e) {
    std::cerr << e.what() << std::endl;
  }
}

int Span::shortestSpan() const {

  if (v.size() < 2) {
    throw std::runtime_error("Not enough numbers to calculate span");
  }

  std::vector<int> tmp(v);
  std::sort(tmp.begin(), tmp.end());

  int sSpan = INT_MAX;
  for (size_t i = 0; i < tmp.size() - 1; ++i)
    sSpan = std::min(sSpan, std::abs(tmp[i + 1] - tmp[i]));
  return sSpan;
}

unsigned int Span::longestSpan() const {

  if (v.size() < 2) {
    throw std::runtime_error("Not enough numbers to calculate span");
  }

  std::vector<int> tmp(v);
  std::sort(tmp.begin(), tmp.end());

  auto minmax = std::minmax_element(v.begin(), v.end());
  return *minmax.second - *minmax.first;
}

void Span::theyAreBillions() {

  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dist(INT_MIN, INT_MAX);

  v.clear();
  v.resize(_N);
  std::generate(v.begin(), v.end(), [&]() { return dist(gen); });
}

void Span::print() const {
  std::cout << "Span contains " << v.size() << "/" << _N << " elements: ";
  for (size_t i = 0; i < v.size(); ++i) {
    std::cout << v[i];
    if (i < v.size() - 1)
      std::cout << ", ";
  }
  std::cout << std::endl;
}
