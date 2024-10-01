#include
#include
#include
int main() {
  std::ofstream output("output.txt");
  if (!output) {
    std::cerr << "Error opening file!" << std::endl;
    return 1;
  }

  if (mkdir("docs", S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH)) {
    perror("Error creating directory");
    return 1;
  }

  return 0;
}