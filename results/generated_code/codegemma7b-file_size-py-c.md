```c
#include <sys/stat.h>
#include <unistd.h>

int main() {
  struct stat s;

  if (stat("input.txt", &s) == 0) {
    printf("Size of input.txt in current working directory: %ld bytes\n", s.st_size);
  }

  if (stat("/input.txt", &s) == 0) {
    printf("Size of input.txt in file system root: %ld bytes\n", s.st_size);
  }

  return 0;
}
```

