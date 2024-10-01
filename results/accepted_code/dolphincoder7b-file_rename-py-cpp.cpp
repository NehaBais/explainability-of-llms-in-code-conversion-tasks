#include <unistd.h>
int main() {
  int result = rename("input.txt", "output.txt");
  // Check the return value for any errors
  if (result == 0)
    printf("File renamed successfully.\n");
  else
    printf("Error: %s\n", strerror(errno));
  return 0;
}