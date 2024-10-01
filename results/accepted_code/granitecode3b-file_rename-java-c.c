#include
#include
int main() {
  char oldname[] = "input.txt";
  char newname[] = "output.txt";
  int success;
  // Rename file (or directory)
  success = rename(oldname, newname);
  if (success != 0) {
    perror("Rename failed");
  } else {
    printf("File renamed successfully\n");
  }
  return 0;
}