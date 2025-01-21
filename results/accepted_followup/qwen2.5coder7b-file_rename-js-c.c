#include <stdio.h>
#include <stdlib.h>

int main() {
  char currentPath[] = "./";
  char rootPath[] = "/";
  char destFile1[] = "output.txt";
  char destFolder1[] = "mydocs";

#ifdef _WIN32

  // Windows specific code
  rename("input.txt", destFile1);
  rename(currentPath, destFolder1);

  rename("c:\\input.txt", "c:\\output.txt");
  rename(rootPath, "c:\\mydocs");

#else

  // UNIX like systems (Linux, macOS)
  rename("input.txt", destFile1);
  strcat(currentPath, "/");
  strcat(currentPath, destFolder1);
  rename(currentPath, "/");

  rename("c:/input.txt", "c:/output.txt");
  rename(rootPath, "c:/mydocs");

#endif

  return 0;
}