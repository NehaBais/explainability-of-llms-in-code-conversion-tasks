#include
#include
int main() {
  std::string path = "C:/parent/test";
  if (mkdir(path.c_str(), S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) == 0) {
    std::cout << "Directory created successfully" << std::endl;
  } else if (errno == EEXIST) {
    std::cout << "Directory already exists" << std::endl;
  } else {
    std::cerr << "Error creating directory: " << strerror(errno) << std::endl;
  }
  return 0;
}