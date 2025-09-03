#pragma once

#include <iostream>

#define Type template <typename T>

Type int easyfind(const T &container, int toFind) {
  auto it = std::find(container.begin(), container.end(), toFind);
  if (it == container.end()) {
    throw std::runtime_error("Value not found in container");
  }
  return static_cast<int>(std::distance(container.begin(), it));
}
