#include
#include
int main() { // permissions are before umask
  int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC,
                S_IRUSR | S_IWUSR); // rights 0640 for rw-r-----
  close(fd);

  mkdir("docs", S_IRWXU | S_IXGRP | S_IXOTH); // rights 0750 for rwxr-x---
  return 0;
}