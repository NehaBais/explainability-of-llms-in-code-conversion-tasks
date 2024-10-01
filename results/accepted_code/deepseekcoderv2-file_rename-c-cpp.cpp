#include <stdio.h>
#include <string.h>
int main() {
  char input[] = "input.txt";
  char output[] = "output.txt";
  if (rename(input, output) == 0)
    printf("File renamed successfully\n");
  else
    perror("Error renaming file");
  char mydocs[] = "docs";
  char input2[] = "/input.txt";
  char output2[] = "/output.txt";
  if (rename(mydocs, "mydocs") == 0)
    printf("File renamed successfully\n");
  else
    perror("Error renaming file");

  if (rename(input2, output2) == 0)
    printf("File renamed successfully\n");
  else
    perror("Error renaming file");
  return 0;
}