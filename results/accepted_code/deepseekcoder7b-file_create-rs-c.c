#include <fcntl.h>    // For open system call
#include <stdio.h>    // For perror function
#include <string.h>   // For strlen function
#include <sys/stat.h> // For mkdir system call
#include <unistd.h> // For close and write system calls, and chdir and getcwd functions

// Function prototypes
void create(const char *path);
int errorHandler(const char *errorMessage, int code);

int main() {
  // Create in the current working directory and root dir
  create(".");
  create("/");

  return 0;
}

void create(const char *path) {
  if (mkdir(path, S_IRWXU) == -1) { // Create a new directory
    errorHandler(strerror(errno), 1);
  }

  int fd =
      open((strlen(path) > 1 && path[strlen(path) - 1] == '/') ? "output.txt"
                                                               : "/output.txt",
           O_CREAT, S_IRUSR | S_IWUSR); // Create a new file
  if (fd == -1) {
    errorHandler(strerror(errno), 1);
  }
  close(fd);
}

int errorHandler(const char *errorMessage, int code) {
  fprintf(stderr, "Error: %s\n", errorMessage); // Write the error to stderr
  _exit(code); // Terminate process with exit status set as code.
}