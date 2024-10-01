#include <stdio.h>
#include <unistd.h>

int main() {
  char path[1024];
  snprintf(path, sizeof(path), "%s",
           "/home/user/docs/input.txt"); // Assuming the file is in
                                         // /home/user/docs directory
  if (access(path, R_OK) == 0) {
    printf("File exists\n");
  } else {
    printf("File does not exist\n");
  }
  return 0;
}