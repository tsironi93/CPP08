#pragma once

#include <deque>
#include <stack>

template <typename T, typename Container = std::deque<T>>
class MutantStack : public std::stack<T, Container> {

public:
  using std::stack<T, Container>::c;
  // Standard iterators (front → back, natural container order)
  using iterator = typename Container::iterator;
  using const_iterator = typename Container::const_iterator;

  // LIFO iterators (top → bottom, stack order)
  using stack_iterator = typename Container::reverse_iterator;
  using const_stack_iterator = typename Container::const_reverse_iterator;

  MutantStack() : std::stack<T, Container>() {}
  MutantStack(const MutantStack &other) : std::stack<T, Container>(other) {}
  MutantStack &operator=(const MutantStack &other) {
    std::stack<T, Container>::operator=(other);
    return *this;
  }
  ~MutantStack() {}

  // stack-style iteration
  stack_iterator begin() { return c.rbegin(); }
  stack_iterator end() { return c.rend(); }
  const_stack_iterator begin() const { return c.rbegin(); }
  const_stack_iterator end() const { return c.rend(); }
};
