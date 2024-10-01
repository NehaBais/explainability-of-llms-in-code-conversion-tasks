#include <stdio.h>
#include <unistd.h>

int main() {
  struct stat st;
  if (stat("file.txt", &st) == 0)
    printf("%,ld B\n", (long)st.st_size);
  else
    perror("file.txt");

  if (stat("/file.txt", &st) == 0)
    printf("%,ld B\n", (long)st.st_size);
  else
    perror("/file.txt");

  return 0;
}