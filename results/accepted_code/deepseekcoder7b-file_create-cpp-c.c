#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
  int fd = open("output.txt", O_WRONLY | O_CREAT);
  close(fd);

  chdir("/"); // Change to root directory

  fd = open("root_output.txt", O_WRONLY | O_CREAT);
  close(fd);

  mkdir("docs", 0755);

  chdir("/"); // back to the root directory again
}