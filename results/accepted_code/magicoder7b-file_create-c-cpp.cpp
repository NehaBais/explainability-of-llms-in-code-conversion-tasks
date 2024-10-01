#include <cstring>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {          /* permissions are before umask */
  mode_t mode = 0640; // define file permissions, same as in C code

  int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC,
                mode); /* rights 0640 for rw-r----- */
  if (fd == -1) {
    // file creation error handling here
  }
  close(fd);

  if (mkdir("docs", mode) != 0) { /* rights 0750 for rwxr-x--- */
                                  // directory creation error handling here
  }

  return 0;
}