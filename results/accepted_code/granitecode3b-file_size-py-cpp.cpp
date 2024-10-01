#include
#include
int main() {
  std::ifstream input("input.txt");
  if (input) {
    std::cout << "Size of input.txt: " << input.tellg() << " bytes"
              << std::endl;
  } else {
    std::cerr << "Error: Unable to open file input.txt" << std::endl;
  }
  input.close();

  std::ifstream rootInput("/input.txt");
  if (rootInput) {
    std::cout << "Size of /input.txt: " << rootInput.tellg() << " bytes"
              << std::endl;
  } else {
    std::cerr << "Error: Unable to open file /input.txt" << std::endl;
  }
  rootInput.close();

  return 0;
}