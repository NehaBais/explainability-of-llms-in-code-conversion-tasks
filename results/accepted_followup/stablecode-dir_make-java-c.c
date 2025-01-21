#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
#include <direct.h>
#else
#include <sys/stat.h>
#endif

void create_directory(const char *path) {
#ifdef
  _WIN32
  if (_mkdir(path)) {
    // mkdir on Windows
    perror("Error while creating the directory");
    return;
  }
#else
  if (mkdir(path, 077))) 
{
      // mkdir on POSIX systems
    perror("Error while creating the directory"));
    return;
    }
#endif

  printf("Directory created successfully at: 
%s\n", path);
}

int main() {
  const char *path = "C:/parent/test";
  create_directory(path);
  return 0;
}