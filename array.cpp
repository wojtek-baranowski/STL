#include <array>
#include <iostream>

int main() {
  std::array<int, 10> arr1;
  arr1.fill(5);
  arr1.at(4) = 3;
  std::array<int, arr1.size()> arr2{};
  std::swap(arr1, arr2);

  for (auto i : arr1) {
    std::cout << i << ' ';
  }
  std::cout << std::endl;
  for (auto i : arr2) {
    std::cout << i << ' ';
  }
  std::cout << std::endl;
}
