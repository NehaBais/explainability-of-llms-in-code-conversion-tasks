#include
#include
int main() {
  std::string filename1 = "input.txt";
  std::string filename2 = "/input.txt";

  // Current working directory
  std::ifstream fileA(filename1);
  if (fileA) {
    long size1 = fileA.tellg();
    std::cout << size1 << " B" << std::endl;
  } else {
    std::cerr << "Error: Unable to open file " << filename1 << std::endl;
    return 1;
  }

  // File system root
  std::ifstream fileB(filename2);
  if (fileB) {
    long size2 = fileB.tellg();
    std::cout << size2 << " B" << std::endl;
  } else {
    std::cerr << "Error: Unable to open file " << filename2 << std::endl;
    return 1;
  }

  return 0;
}