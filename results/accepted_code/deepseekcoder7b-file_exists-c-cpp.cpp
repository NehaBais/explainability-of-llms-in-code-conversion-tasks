// Header Files
#include <fstream>    // for std::ifstream
#include <iostream>   // for std::cout, std::endl
#include <sys/stat.h> // for stat() function

bool check_file(const char *path) { // Function to check file existence
  struct stat buffer; // buffer to hold info about the file or directory
  return (stat(path, &buffer) ==
          0); // check if file/dir exists and get its info into 'buffer'
              // variable. Return true on success, false otherwise.
}

bool check_directory(
    const char *path) { // Function to check directory existence
  struct stat buffer;
  return (
      stat(path, &buffer) == 0 &&
      S_ISDIR(
          buffer.st_mode)); // Check if file/dir exists and it is a directory.
                            // Return true on success, false otherwise.
}

int main() {
  std::cout << "input.txt is a regular file? "
            << (check_file("input.txt") ? "Yes" : "No")
            << std::endl; // Check current working directory for input.txt and
                          // print result.
  std::cout << "docs is a directory? "
            << (check_directory("docs") ? "Yes" : "No")
            << std::endl; // Check current working directory for docs and print
                          // result.

  std::cout
      << "/input.txt is a regular file? "
      << (check_file("/input.txt") ? "Yes" : "No")
      << std::endl; // Check root filesystem for /input.txt and print result.
  std::cout << "/docs is a directory? "
            << (check_directory("/docs") ? "Yes" : "No")
            << std::endl; // Check root filesystem for /docs and print result.

  return <｜begin▁of▁sentence｜ >
         0; // Returning an int value to match the standard of main function in
            // C++. The correct return value should be 0, indicating successful
            // termination of program execution.
}