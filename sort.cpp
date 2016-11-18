#include <algorithm>
#include <ctime>
#include <deque>
#include <functional>
#include <iostream>
#include <iterator>
#include <iterator>

int rando() { return std::modulus<int>()(std::rand(), 8); }


template<typename T>
void print(const T&  d) {
  std::copy(d.begin(), d.end(), std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl;
}

int main() {

  std::srand(std::time(0));
  std::deque<int> deq;
  std::generate_n(std::back_inserter(deq), 14, rando);

  std::sort(deq.begin(), deq.end());
  print(deq);

  auto it = std::unique(deq.begin(), deq.end());
  deq.resize(std::distance(deq.begin(), it));
  print(deq);

  auto mid = deq.begin() + (deq.end() - deq.begin()) / 2;
  std::rotate(deq.begin(), mid, deq.end());
  print(deq);
  return 0;
}
