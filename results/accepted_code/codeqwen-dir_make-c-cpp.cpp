#include <iostream>
#include <string>
#include <sys/stat.h>
#include <sys/types.h>

int main(int argc, char **argv) {
  std::string str;
  struct stat statBuf;

  if (argc != 2) {
    std::cerr << "usage: " << argv[0] << " <path>" << std::endl;
    return 1;
  }
  for (char *s = strtok(argv[1], "/"); s != NULL; s = strtok(NULL, "/")) {
    if (s != argv[1]) {
      *(s - 1) = '/';
    }
    if (stat(argv[0], &statBuf) == -1) {
      mkdir(argv[0], 0);
    } else {
      if (!S_ISDIR(statBuf.st_mode)) {
        std::cerr << "couldn't create directory " << argv[0] << std::endl;
        return 1;
      }
    }
  }
  return 0;
}