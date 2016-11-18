#include <functional>
#include <iostream>

int main() {
  std::function<int(int)> multi1 =
      std::bind(std::multiplies<int>(), std::placeholders::_1, 5);
  std::function<int(int)> multi2 = [](int x) { return x * 5; };

  std::cout << multi1(11) << std::endl;
  std::cout << multi2(22) << std::endl;

  return 0;
}
