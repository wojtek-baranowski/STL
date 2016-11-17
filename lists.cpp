#include <iostream>
#include <iterator>
#include <list>
#include <numeric>
#include <vector>
int main() {
  std::vector<int> l;
  for (int i = 0; i < 1000000; ++i) {
    l.emplace_back(i);
  }
  // auto vi =l.begin();
  // std::advance(vi,500000);
  // std::cout<<*vi<<std::endl;
  std::cout << l.at(500000) << std::endl;
}
