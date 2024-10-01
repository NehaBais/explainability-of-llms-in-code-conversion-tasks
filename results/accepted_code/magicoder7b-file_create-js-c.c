#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

void fct(int err) {
  if (err != 0)
    printf("Error: %s\n", strerror(err));
}

// Create a new file named "output.txt" in the current working directory
int main() {
  int result = open("output.txt", O_CREAT | O_EXCL, S_IRUSR | S_IWUSR);
  if (result < 0)
    fct(errno);

  // Create a new file named "output.txt" in the root directory
  result = open("/output.txt", O_CREAT | O_EXCL, S_IRUSR | S_IWUSR);
  if (result < 0)
    fct(errno);

  return 0;
}