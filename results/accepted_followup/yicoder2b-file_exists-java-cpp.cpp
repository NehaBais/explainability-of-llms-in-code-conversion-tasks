#include <cstdio>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h> // added this line

int main() {
  struct stat filestat;
  if (stat("input.txt", &filestat) == 0 && S_ISREG(filestat.st_mode))
    printf("File 'input.txt' exists\n");
  else
    printf("File 'input.txt' does not exist\n");

  // checking for file in filesystem root
  stat("/docs/input.txt", &filestat);
  if (S_ISREG(filestat.st_mode))
    printf("/docs/input.txt exists and it's a regular file\n");
  else if (S_ISDIR(filestat.st_mode))
    printf("/docs/input.txt exists and it's a directory\n");
  else
    printf("/docs/input.txt exists but it's not a file or a directory\n");

  return 0;
}