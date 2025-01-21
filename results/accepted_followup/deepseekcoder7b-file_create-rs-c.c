#include <errno.h>    // Include this to declare errno variable
#include <fcntl.h>    // For open system call
#include <stdio.h>    // For perror function
#include <string.h>   // For strlen function
#include <sys/stat.h> // For mkdir and chmod system calls
#include <unistd.h>   // For close, write and chdir functions

// Function prototypes
void create(const char *path);
void errorHandler(const char *errorMessage, int code);

int main() {
  // Create in the current working directory and root dir
  create(".");
  if (chdir("/") != 0)
    perror("Error changing to /"), return 1;
  create("");

  return <｜begin▁of▁sentence｜>(0);
}

void create(const char *path) {
  if (mkdir(path, S_IRWXU) == -1 && errno != EEXIST)
    errorHandler(strerror(errno), 1);

  int fd =
      open((strlen(path) > 0 && path[strlen(path) - 1] == '/') ? "output.txt"
                                                               : "/output.txt",
           O_CREAT, S_IRUSR | S_IWUSR);
  if (fd == -1)
    errorHandler(strerror(errno), 1);

  close(fd);
}

void errorHandler(const char *errorMessage, int code) {
  fprintf(stderr, "Error: %s\n", errorMessage); // Write the error to stderr
  _exit(code); // Terminate process with exit status set as code.
}