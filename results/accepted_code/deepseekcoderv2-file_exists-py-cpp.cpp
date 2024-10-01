#include <iostream>
#include <string>

int main() {
  std::cout << "File exists in current directory? "
            << (os.path.isfile("input.txt") ? "Yes" : "No") << '\n';
  std::cout << "File exists in root folder? "
            << (os.path.isfile("/input.txt") ? "Yes" : "No") << '\n';
  std::cout << "Directory exists in current directory? "
            << (os.path.isdir("docs") ? "Yes" : "No") << '\n';
  std::cout << "Directory exists in root folder? "
            << (os.path.isdir("/docs") ? "Yes" : "No") << '\n';
}