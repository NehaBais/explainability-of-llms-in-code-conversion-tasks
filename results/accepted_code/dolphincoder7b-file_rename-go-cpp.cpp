#include "dirent.h"
#include "string.h"
#include "unistd.h"
#include <iostream>

int main(int argc, char **argv) {
  const char *dir = ".";

  if (argc > 1 && strcmp("-d", argv[1]) == 0)
    dir = "/";

  DIR *dp;
  struct dirent *ep;

  dp = opendir(dir);

  if (dp != NULL) {
    while ((ep = readdir(dp))) {
      std::cout << ep->d_name << std::endl;
    }

    closedir(dp);
  } else
    perror("Couldn't open the directory");
}