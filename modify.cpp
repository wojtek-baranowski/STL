#include <algorithm>
#include <ctime>
#include <iostream>
#include <iterator>
#include <vector>

int rando() { return std::rand() % 10; }

int main() {

  std::vector<int> vec;
  vec.resize(30);

  std::srand(std::time(0));
  std::generate(vec.begin(), vec.end(), rando);

  std::sort(vec.begin(), vec.end());
  std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl;

  auto it = std::unique(vec.begin(), vec.end());
  vec.resize(std::distance(vec.begin(), it));
  std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl;

  std::reverse(vec.begin(), vec.end());
  std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl;

  return 0;
}
