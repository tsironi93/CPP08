#include "./Span.hpp"
#include <climits>
#include <exception>
#include <iostream>

int main() {
  std::cout << "================Simple==============" << std::endl;
  Span sp = Span(5);
  sp.addNumber(-10);
  sp.addNumber(6);
  sp.addNumber(11);
  sp.addNumber(11);
  sp.addNumber(INT_MAX);
  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;

  std::cout << "===============Go Cray==============" << std::endl;
  try {
    Span Nuts = Span(10000000);
    Nuts.theyAreBillions();
    // Nuts.print();

    std::cout << Nuts.shortestSpan() << std::endl;
    std::cout << Nuts.longestSpan() << std::endl;

  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  return 0;
}
