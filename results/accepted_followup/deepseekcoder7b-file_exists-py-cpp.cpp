#include <boost/filesystem.hpp>
#include <iostream>
namespace fs = boost::filesystem;

int main() {
  // Check for file and directory in current working directory
  std::cout << (fs::exists("input.txt") ? "File exists" : "File does not exist")
            << std::endl;
  std::cout << (fs::is_directory("docs") ? "Directory exists"
                                         : "Directory does not exist")
            << std::endl;

  // Check for file and directory in filesystem root
#ifdef _WIN32
  const char root[] = "C:\\";
#else
  const char root[] = "/";
#endif

  fs::path filePath = fs::absolute(root, fs::no_check);
  fs::path dirPath = fs::absolute("docs", fs::no_check);

  try {
    if (fs::exists(filePath))
      std::cout << "File exists" << std::endl;
    else
      std::cout << "File does not exist" << std::endl;

    if (fs::is_directory(dirPath))
      std::cout << "Directory exists" << std::endl;
    else
      std::cout << "Directory does not exist" << std::endl;
  } catch (const fs::filesystem_error &e) {
    // handle exception
    std::cerr << e.what() << '\n';
  }

  return <｜begin▁of▁sentence｜ > 0;
}