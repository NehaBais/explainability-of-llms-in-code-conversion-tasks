#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
  // Check if 'input.txt' exists in current working directory
  if (access("input.txt", F_OK) != 0) {
    printf("'input.txt' does not exist\n");
  }

  // Check if 'c:/input.txt' exists in the filesystem root
  if (access("/home/user1/input.txt", F_OK) != 0) {
    printf("File '/home/user1/input.txt' does not exist\n");
  }

  // Check if 'docs' folder exists in current working directory
  if (access("docs", F_OK) != 0) {
    printf("'docs' folder does not exist\n");
  }

  // Check if 'c:/docs' folder exists in the filesystem root
  if (access("/home/user1/docs", F_OK) != 0) {
    printf("Folder '/home/user1/docs' does not exist\n");
  }

  return 0;
}