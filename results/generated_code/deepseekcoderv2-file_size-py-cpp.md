```
#include <stdio.h>
#include <unistd.h>

int main(void) {
  struct stat s;
  int size, size2;

  if (stat("input.txt", &s)) {
    printf("error\n");
    return -1;
  }

  size = s.st_size;

  if (stat("/input.txt", &s)) {
    printf("error\n");
    return -1;
  }

  size2 = s.st_size;
}
```
