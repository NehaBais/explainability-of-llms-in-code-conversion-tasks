#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

void fct(int err) {
  if (err != 0)
    printf("Error: %s\n", strerror(err));
}

// Declare the open() function by yourself since it is not a standard library
// function
int open(const char *pathname, int flags) {
  return open(pathname, flags, S_IRUSR | S_IWUSR);
}

int main() {
  int result = open("output.txt", O_CREAT | O_EXCL,
                    0644); // 0644 = User Read/Write (RW) / Group Read Only (RO)
                           // / Other Read Only (RO)
  if (result < 0)
    fct(errno);

  result = open("/output.txt", O_CREAT | O_EXCL, 0644);
  if (result < 0)
    fct(errno);

  return 0;
}