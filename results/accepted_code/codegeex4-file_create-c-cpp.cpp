#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
  int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC,
                S_IRUSR | S_IWUSR | S_IRGRP);
  close(fd);

  mkdir("docs", S_IRWXU | S_IXGRP | S_IXOTH);

  chdir("/");
  fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC,
            S_IRUSR | S_IWUSR | S_IRGRP);
  close(fd);

  mkdir("docs", S_IRWXU | S_IXGRP | S_IXOTH);

  return 0;
}