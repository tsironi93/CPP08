#pragma once

#include <iostream>
#include <ostream>
#define Type template <typename T>

Type int easyfind(const T &container, int toFind) {
  int index = 0;
  for (auto i = container.begin(); i != container.end(); ++i, ++index)
    if (*i == toFind) {
      return index;
    }
  std::cerr << "The value is not found in the container" << std::endl;
  return -1;
}

// Type int easyfind(const T &container, int toFind) {
//     auto it = std::find(container.begin(), container.end(), toFind);
//     if (it == container.end()) {
//         throw std::runtime_error("Value not found in container");
//     }
//     return static_cast<int>(std::distance(container.begin(), it));
// }
