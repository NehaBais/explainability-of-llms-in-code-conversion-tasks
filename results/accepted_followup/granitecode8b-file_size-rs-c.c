#include
#include
#include
#include
int main(int argc, char *argv[]) {
  if (argc != 2) {
    fprintf(stderr, "Usage: %s filenamen", argv[0]);
    return 1;
  }
  struct stat file_info;
  int fd = open(argv[1], O_RDONLY);
  if (fd == -1) {
    perror("open");
    return 2;
  }
  if (fstat(fd, &file_info) == -1) {
    close(fd);
    perror("fstat");
    return 3;
  }
  printf("Size of file.txt is %ld bytesn", (long)file_info.st_size);
  close(fd);
  return 0;
}