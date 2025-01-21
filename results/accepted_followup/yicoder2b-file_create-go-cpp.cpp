#include <cstdio>   // For fopen(), fchmod(), mkfifo(), ...
#include <fcntl.h>  // For O_RDONLY and O_WRONLY flags for open() function
#include <iostream> // For std::cout

void createFile(const std::string &fn) {
  FILE *f = fopen(fn.c_str(), "w");
  if (!f) {
    std::cout << "Error creating file: " << fn << std::endl;
    return;
  }
  fclose(f);
  std::cout << "File " << fn << " created!" << std::endl;
}

void createDir(const std::string &dn) {
  mode_t mode =
      S_IRWXU | S_IRGRP |
      S_IROTH; // 755 permissions, you can change them to suit your needs.
  int retval =
      mkdir(dn.c_str(), mode); // mkdir returns -1 on error. You may want to
                               // check for this with an if statement.
  if (retval == -1) {
    std::cout << "Error creating directory: " << dn << std::endl;
    return;
  }
  std::cout << "Directory " << dn << " created!" << std::endl;
}

int main() {
  createFile("input.txt");    // create file in current working directory
  createDir("docs");          // create directory in current working directory
  createFile("/newfile.txt"); // create file in root filesystem
  createDir("/newdir");       // create directory in root filesystem
}