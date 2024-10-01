#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>

int main() {
  // Create an empty file 'output.txt' in the current directory and root
  // filesystem twice
  int fd = open("output.txt", O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
  if (fd == -1) {
    perror("open error");
    return 1;
  } else
    close(fd); // File created successfully. No need to write anything as it is
               // supposed to be empty.

  // To create a file at root, you have to give the absolute path. For instance,
  // '/output.txt'
  fd = open("/output.txt", O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
  if (fd == -1) {
    perror("open error");
    return 1; // Error condition
  } else
    close(fd); // File created successfully. No need to write anything as it is
               // supposed to be empty.

  // To create a directory, we use mkdir function provided by sys/stat.h
  if (mkdir("docs", S_IRWXU | S_IRWXG | S_IRWXO) == -1) {
    perror("Cannot create directory 'docs'");
    return 2; // Error condition.
  }

  // To create a directory at root, you have to give the absolute path. For
  // instance, '/docs'
  if (mkdir("/docs", S_IRWXU | S_IRWXG | S_IRWXO) == -1) {
    perror("Cannot create directory '/docs'");
    return 2; // Error condition.
  }

  return 0;
}