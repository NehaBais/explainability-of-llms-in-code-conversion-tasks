#include <stdio.h>
#include <stdlib.h>
int main() {
  FILE *fp;
  char str[60];                 // Declare a string of size 60
  fp = fopen("input.txt", "r"); // open the file input.txt in read mode,and if
                                // it is not present then return NULL pointer
  if (fp == NULL) {
    perror("Error opening file");
    exit(1);
  }
  while (fgets(str, 60, fp) != NULL)
    printf("%s", str); // print the string in console window
  fclose(fp);
  return 0;
}