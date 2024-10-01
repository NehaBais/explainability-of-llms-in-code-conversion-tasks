#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
  // Create output.txt in the current working directory
  FILE *f = fopen("output.txt", "w");
  if (f)
    fclose(f);

  struct stat buf;
  stat("/output.txt", &buf);
  if (S_ISDIR(buf.st_mode)) { // if it's a directory
    // Create the "/output.txt" directory in the filesystem root
    int fd = open("/output.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
    if (fd >= 0) {
      close(fd);
    }
  }

  // Create the "docs" directory in the current working directory
  f = fopen("docs", "w");
  if (f)
    fclose(f);

  stat("/docs", &buf);        // stat to get its type and mode
  if (S_ISDIR(buf.st_mode)) { // if it's a directory
    // Create the "/docs" directory in filesystem root
    fd = open("/docs", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
    if (fd >= 0) {
      close(fd);
    }
  }
  return 0;
}