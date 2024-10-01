#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> // for rename() and access() functions

int main(void) {
  char oldname1[] = "input.txt";
  char newname1[] = "output.txt";
  char oldname2[] = "/input.txt";
  char newname2[] = "/output.txt";
  char oldname3[] = "docs";
  char newname3[] = "mydocs";
  char oldname4[] = "/docs/";
  char newname4[] = "/mydocs/";

  // check for existence of files or directories before renaming
  if (access(oldname1, F_OK) == 0) {
    rename(oldname1, newname1);
    printf("The file called %s was renamed as %s.\n", oldname1, newname1);
  } else {
    printf("The file called %s could not be renamed into %s.\n", oldname1,
           newname1);
  }

  if (access(oldname2, F_OK) == 0) {
    rename(oldname2, newname2);
    printf("The file called %s was renamed as %s.\n", oldname2, newname2);
  } else {
    printf("The file called %s could not be renamed into %s.\n", oldname2,
           newname2);
  }

  if (access(oldname3, F_OK) == 0) {
    rename(oldname3, newname3);
    printf("The directory called %s was renamed as %s.\n", oldname3, newname3);
  } else {
    printf("The directory called %s could not be renamed into %s.\n", oldname3,
           newname3);
  }

  if (access(oldname4, F_OK) == 0) {
    rename(oldname4, newname4);
    printf("The directory called %s was renamed as %s.\n", oldname4, newname4);
  } else {
    printf("The directory called %s could not be renamed into %s.\n", oldname4,
           newname4);
  }

  return 0;
}