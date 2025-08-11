#include "./easyfind.hpp"
#include <array>
#include <deque>
#include <forward_list>
#include <iostream>
#include <list>
#include <ostream>
#include <vector>

int main() {

  //==============Containers=======================
  std::vector<int> v = {1, 2, 3};
  std::list<int> l = {4, 5, 6};
  std::deque<int> d = {7, 8, 9};
  std::array<int, 3> a = {10, 11, 12};
  std::forward_list<int> f = {13, 14, 15};

  //================Valid Search===================
  auto i = easyfind(v, 1);
  std::cout << "================Valid Search===================" << std::endl;
  if (i != -1) {
    std::cout << "The value in the vector container is found at the index: "
              << i << std::endl;
  }

  i = easyfind(l, 5);
  if (i != -1) {
    std::cout << "The value in the list container is found at the index: " << i
              << std::endl;
  }

  i = easyfind(d, 9);
  if (i != -1) {
    std::cout << "The value in the deque container is found at the index: " << i
              << std::endl;
  }

  i = easyfind(a, 12);
  if (i != -1) {
    std::cout << "The value in the array container is found at the index: " << i
              << std::endl;
  }

  i = easyfind(f, 13);
  if (i != -1) {
    std::cout
        << "The value in the forward_list container is found at the index: "
        << i << std::endl;
  }
  std::cout << std::endl;

  //===================Non Valid Search===============
  std::cout << "================Non Valid Search==================="
            << std::endl;
  i = easyfind(v, 100);
  if (i != -1) {
    std::cout << "The value in the vector container is found at the index: "
              << i << std::endl;
  }

  i = easyfind(l, 500);
  if (i != -1) {
    std::cout << "The value in the list container is found at the index: " << i
              << std::endl;
  }

  i = easyfind(d, 900);
  if (i != -1) {
    std::cout << "The value in the deque container is found at the index: " << i
              << std::endl;
  }

  i = easyfind(a, 1200);
  if (i != -1) {
    std::cout << "The value in the array container is found at the index: " << i
              << std::endl;
  }

  i = easyfind(f, 1300);
  if (i != -1) {
    std::cout
        << "The value in the forward_list container is found at the index: "
        << i << std::endl;
  }

  return 0;
}
