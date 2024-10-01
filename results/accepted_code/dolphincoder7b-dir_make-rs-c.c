#include <stdbool.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

bool mkdir_with_creation(const char *path) {
  if (access(path, F_OK) == -1) {
    return mkdir(path, 0777);
  } else {
    return true;
  }
}