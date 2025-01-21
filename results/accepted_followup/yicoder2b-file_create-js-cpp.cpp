#include <iostream>
#include <stdio.h>

int main() {
  // Creating a new empty file named "output.txt" and writing an empty string to
  // it
  FILE *file = fopen("output.txt", "w");
  if (!file)
    perror("fopen");
  fclose(file);

  // Creating a new directory called "docs"
  mkdir("docs", S_IRWXU | S_IRGRP | S_IXGRP | S_IROTH | S_IXOTH);
  if (errno == EEXIST)
    std::cout << "Directory 'docs' already exists\n";
  else {
    perror("mkdir");
  }

  // Creating a new directory named "/docs"
  mkdir("/docs", S_IRWXU | S_IRGRP | S_IXGRP | S_IROTH | S_IXOTH);
  if (errno == EEXIST)
    std::cout << "Directory '/docs' already exists\n";
  else {
    perror("mkdir");
  }

  return 0;
}