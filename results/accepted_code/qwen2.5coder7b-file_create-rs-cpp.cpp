#include <fstream>
#include <iostream>
#include <sys/stat.h>
#include <unistd.h>

const std::string FILE_NAME = "output.txt";
const std::string DIR_NAME = "docs";

void createFilesAndDirectory(const std::string &root) {
  // Create directory
  if (mkdir(root + "/" + DIR_NAME.c_str(), 0755) == -1) {
    perror("Error creating directory");
    return;
  }

  // Create file
  std::ofstream ofs(root + "/" + FILE_NAME, std::ios::out | std::ios::trunc);
  if (!ofs.is_open()) {
    perror("Error creating file");
    return;
  }
  ofs.close();
}

void errorHandler(const std::string &error_message, int code) {
  std::cerr << "Error: " << error_message << std::endl;
  exit(code);
}

int main() {
  try {
    // Get current working directory
    char cwd[1024];
    if (getcwd(cwd, sizeof(cwd)) == nullptr) {
      errorHandler("Failed to get current working directory", 1);
    }
    createFilesAndDirectory(std::string(cwd));

    // Create root directory ("/") - This is a bit tricky in C++ as the root
    // directory does not exist directly on most systems, so we need to manually
    // change to the root and then create.
    if (chdir("/") == -1) {
      errorHandler("Failed to change to root directory", 2);
    }
    createFilesAndDirectory("/");

  } catch (const std::exception &e) {
    errorHandler(e.what(), 3);
  }

  return 0;
}