int main() {
  // Declaration of fd
  int fd;
  // Code using fd
  fd = open("/docs", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
  if (fd >= 0) {
    close(fd);
  }
}