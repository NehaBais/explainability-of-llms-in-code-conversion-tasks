#include <stdio.h>
#include <string.h>
int main() {
  char oldname[100] = "input.txt";
  char newname[100] = "output.txt";
  if (rename(oldname, newname) == 0) {
    printf("The file called %s was renamed as %s\n", oldname, newname);
  } else {
    printf("Could not rename the file %s\n", oldname);
  }

  char dirname[100] = "docs";
  char mydirname[100] = "mydocs";
  if (rename(dirname, mydirname) == 0) {
    printf("The directory %s was renamed as %s\n", dirname, mydirname);
  } else {
    printf("Could not rename the directory %s\n", dirname);
  }
  return 0;
}