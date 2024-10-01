#include <stdio.h>
#include <sys/stat.h>

int main() {
  struct stat st;
  stat("input.txt", &st);
  printf("%ld\n", (long)st.st_size);

  stat("/input.txt", &st);
  printf("%ld\n", (long)st.st_size);

  return 0;
}