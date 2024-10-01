#include <fcntl.h>
#include <iostream>
#include <sys/stat.h>
#include <unistd.h>

int main() {
  // Create file "output.txt" with permissions 0644 (rw-r-----) and size 0
  // bytes.
  std::string cmd = "touch output.txt && chmod 0644 output.txt";
  system(cmd.c_str());

  // Close the file descriptor for "output.txt".
  close(STDOUT_FILENO);

  // Create directory "docs" with permissions 0750 (rwxr-x---) and an empty
  // directory.
  std::string createDirCmd = "mkdir -p docs && chmod 0750 docs";
  system(createDirCmd.c_str());

  return 0;
}