#include <experimental/filesystem>
#include <iostream>

void printFileSize(const std::string &f) {
  try {
    std::experimental::filesystem::path filePath(f);

    if (!std::experimental::filesystem::exists(filePath))) 
        {
        std::cout << "The specified file does not exist.\n";
        return;
      }

        uintmax_t size = std::experimental::filesystem::file_size(filePath));
        std::cout << "Size of the file: " << size << " bytes\n";
    } 
    catch (const std::exception &e)) 
    {
      std::cerr << "Exception caught: " << e.what() << '\n';
    }
}

int main() {
  printFileSize("input.txt");
  printFileSize("/input.txt");
  return 0;
}