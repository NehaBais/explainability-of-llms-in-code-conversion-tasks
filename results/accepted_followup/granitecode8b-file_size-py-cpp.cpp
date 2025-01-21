#include
#include
int main() {
  std::string filename1 = "input.txt";
  std::string filename2 = "/input.txt";
  struct stat info1, info2;

  if (stat(filename1.c_str(), &info1) != 0) {
    std::cerr << "Error getting file size for " << filename1 << std::endl;
    return 1;
  }

  if (stat(filename2.c_str(), &info2) != 0) {
    std::cerr << "Error getting file size for " << filename2 << std::endl;
    return 1;
  }

  std::cout << "File size for " << filename1 << ": " << info1.st_size
            << std::endl;
  std::cout << "File size for " << filename2 << ": " << info2.st_size
            << std::endl;

  return 0;
}