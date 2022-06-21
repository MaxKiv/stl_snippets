#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

int gen() { return std::rand(); }

int main() {

  std::vector<int> v(25);
  std::generate(v.begin(), v.end(), gen);
  for (const auto &el : v) {
    std::cout << el << " ";
  }
  std::cout << std::endl;

  return 0;
}
