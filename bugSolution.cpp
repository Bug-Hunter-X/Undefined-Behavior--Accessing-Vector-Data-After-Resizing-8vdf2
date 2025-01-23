#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec;
  for (int i = 0; i < 10; ++i) {
    vec.push_back(i);
  }

  // Correct way to access vector elements using iterators
  for (int x : vec) {
    std::cout << x << " ";
  }
  std::cout << std::endl;

  vec.push_back(10);

  // Correct way to access vector elements using iterators after resize
  for (int x : vec) {
    std::cout << x << " ";
  }
  std::cout << std::endl; 

  return 0;
}
