#include <stdio.h>
#include <sys/stat.h>

int main() {
  if (creat("output.txt", 0644) < 0) {
    perror("creat");
    return 1;
  }

  if (creat("/output.txt", 0644) < 0) {
    perror("creat");
    return 1;
  }

  if (mkdir("docs", 0755) < 0) {
    perror("mkdir");
    return 1;
  }

  if (mkdir("/docs", 0755) < 0) {
    perror("mkdir");
    return 1;
  }

  return 0;
}