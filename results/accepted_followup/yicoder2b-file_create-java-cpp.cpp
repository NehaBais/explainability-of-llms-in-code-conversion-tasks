#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
  const char *output_txt = "output.txt";
  const char *docs = "docs";
  int fd1, fd2;
  struct stat buf;

  // Check if file already exists and is empty
  fd1 = open(output_txt, O_RDONLY | O_EXCL | O_NOFOLLOW);
  if (fd1 != -1) {
    fstat(fd1, &buf);
    if ((size_t)buf.st_size > 0) {
      printf("%s already exists and is not empty\n", output_txt);
      close(fd1);
      return -1;
    }
  } else if (errno == EEXIST && access(output_txt, F_OK) == 0) {
    printf("%s already exists but is not empty\n", output_txt);
    close(fd1);
    return -1;
  }

  // Create "here" directory
  if (mkdir(docs, S_IRWXU | S_IRWXG | S_IROTH | S_IWOTH) == 0 ||
      errno != EEXIST && access(docs, F_OK) == -1) {
    printf("%s\n", docs);
  } else if (access(docs, R_OK | X_OK) == -1) {
    perror("Could not create " + docs);
    return 1;
  }

  // Create root directory
  if (mkdir(output_txt, S_IRWXU | S_IRWXG | S_IROTH | S_IWOTH) == -1 ||
      access(output_txt, F_OK) == -1) {
    perror("Could not create " + output_txt);
    return 1;
  }
  close(fd1);
  return 0;
}