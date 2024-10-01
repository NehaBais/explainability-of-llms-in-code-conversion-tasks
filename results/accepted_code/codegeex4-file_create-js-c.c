#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

void handle_error(int err) {
  if (err != 0)
    perror("Error");
}

int main() {
  // Create file in current directory
  int fd1 = open("./output.txt", O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
  close(fd1);

  // Create file in root directory
  int fd2 = open("/output.txt", O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
  close(fd2);

  // Create folder in current directory
  if (mkdir("./docs", 0755) != 0)
    handle_error(errno);

  // Create folder in root directory
  if (mkdir("/docs", 0755) != 0)
    handle_error(errno);

  return 0;
}