#pragma once

#include <deque>
#include <stack>

template <typename T, typename Container = std::deque<T>>
class MutantStack : public std::stack<T, Container> {

public:
  using std::stack<T, Container>::stack;
  using iterator = typename Container::iterator;
  using const_iterator = typename Container::const_iterator;
  using reverse_iterator = typename Container::reverse_iterator;
  using const_reverse_iterator = typename Container::const_reverse_iterator;

  iterator begin() { return this->c.begin(); }
  iterator end() { return this->c.end(); }
  const iterator begin() const { return this->c.begin; }
  const iterator end() const { return this->c.end; }

  reverse_iterator rbegin() { return this->c.rbegin(); }
  reverse_iterator rend() { return this->c.rend(); }
  const reverse_iterator rbegin() const { return this->c.rbegin; }
  const reverse_iterator rend() const { return this->c.rend; }
};
