#include <iostream>
#include <vector>
int main() {
  std::vector<long long> fs;
  fs.push_back(1);
  for (const auto &f : fs) {
    std::cout << f << " ";
  }
  std::cout << "\nNumber of factors = " << fs.size() << std::endl;
}