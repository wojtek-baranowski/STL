#include <iostream>
#include <set>

int main() {
  std::set<int> mySet = {1, 2, 3, 4, 5, 6, 7};

  std::cout << std::distance(mySet.begin(), mySet.lower_bound(4)) << std::endl;
  std::cout << std::distance(mySet.begin(), mySet.upper_bound(4)) << std::endl;
  std::cout << *mySet.lower_bound(4) << std::endl;
  std::cout << *mySet.upper_bound(4) << std::endl;

  auto s1 = mySet.equal_range(4);

  std::cout << std::distance(s1.first, s1.second) << std::endl;

  // std::cout<<
}
