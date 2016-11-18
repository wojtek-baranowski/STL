#include <algorithm>
#include <iostream>
#include <string>

bool is_palindrome(std::string word) {
  auto position = mismatch(word.begin(), word.end(), word.rbegin(), word.rend());
  return (position.first == word.end());
}

int main() {
  std::string s1 = "kajak";
  std::cout << "It is palindrome? " << std::boolalpha << is_palindrome(s1)
            << std::endl;

  return 0;
}
