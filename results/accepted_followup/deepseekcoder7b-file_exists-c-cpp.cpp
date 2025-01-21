#include <fstream>    // for std::ifstream
#include <iostream>   // for std::cout, std::endl
#include <sys/stat.h> // for stat() function

bool check_file(const char *path) { // Function to check file existence
  struct stat buffer; // buffer to hold info about the file or directory
  return (stat(path, &buffer) ==
          0); // Check if file/dir exists and get its info into 'buffer'
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
  std::cout << "input.txt exists: " << check_file("input.txt")
            << std::endl; // Checking the existance of 'input.txt'
  std::cout << "Directory exists: " << check_directory("/home/user1")
            << std::endl; // Checking if '/home/user1' is a directory
  return 0; // Returning an int value to match the standard of main function in
            // C++. The correct return value should be 0, indicating successful
            // termination of program execution.
}