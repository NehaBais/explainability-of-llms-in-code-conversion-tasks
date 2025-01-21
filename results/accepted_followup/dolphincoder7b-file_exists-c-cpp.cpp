#include <boost/filesystem.hpp> // For filesystem operations (Boost 1.65+)
#include <iostream>             // For cout

int main() {
  boost::filesystem::path current_directory = boost::filesystem::current_path();
  std::cout << "input.txt is a regular file? "
            << (boost::filesystem::is_regular_file(current_directory /
                                                   "input.txt")
                    ? "yes"
                    : "no");

  std::cout << "\ndocs is a directory? "
            << (boost::filesystem::is_directory(current_directory / "docs")
                    ? "yes"
                    : "no");

  boost::filesystem::path root_directory =
      boost::filesystem::system_complete("input.txt");
  std::cout << "\n/input.txt is a regular file? "
            << (boost::filesystem::is_regular_file(root_directory) ? "yes"
                                                                   : "no");

  std::cout << "\n/docs is a directory? "
            << (boost::filesystem::is_directory(root_directory / "docs")
                    ? "yes"
                    : "no");

  return 0;
}