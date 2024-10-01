#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int create(const char *path) {
  struct stat st;
  if (stat(path, &st)) {
    if (mkdir(path, 0755)) { // create the directory and set permissions to
                             // allow read/write access
      fprintf(stderr, "Error creating directory: %s\n", path);
      return -1;
    } else {
      stat(path, &st); // get new stats after directory creation
    }
  }

  // create a file named output.txt of zero bytes
  int fd = open(path "/output.txt", O_WRONLY | O_CREAT | O_TRUNC,
                0644); // truncate to empty (or create if not exists) the file
                       // with permissions 644
  if (fd == -1) {
    fprintf(stderr, "Error opening file: %s\n", path "/output.txt");
    return -1;
  } else {
    close(fd); // don't need the fd now, it's just a placeholder for simplicity
  }
  return 0; // success case
}

int main() {
  if (create(".") == -1 || create("/") == -1) {
    fprintf(stderr, "Failed to create either 'output.txt' or 'docs' in the "
                    "current working directory\n");
    return 1; // error case
  }
  return 0; // success case, if both files are successfully created
}