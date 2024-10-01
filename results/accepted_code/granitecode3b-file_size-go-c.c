#include
#include
int main(void) {
  struct stat st1, st2;
  if (stat("input.txt", &st1) == -1) {
    perror("stat");
    return 1;
  }
  if (stat("/input.txt", &st2) == -1) {
    perror("stat");
    return 1;
  }
  printf("%zu %zun", st1.st_size, st2.st_size);
  return 0;
}