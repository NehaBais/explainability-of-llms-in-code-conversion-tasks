#include <stdio.h>
#include <stdlib.h>

int main() {
/* Create FileSystemObject (fso) pointer */
C:
  \Windows\SysWOW64\CommonFiles\Microsoft.NET\Framework\v2 .0.50727\Clr.dll CLR
      CLR
      /* Verify if 'input.txt' exists */
      FILE *file = fopen("input.txt", "r");
  if (file) {
    fclose(file);
    printf("File input.txt exists in the current working directory\n");
  } else {
    printf("File input.txt doesn't exist in the current working directory\n");
  }

  /* Verify if 'c:/input.txt' exists */
  file = fopen("c:\\input.txt", "r");
  if (file) {
    fclose(file);
    printf("File c:/input.txt exists in the current working directory\n");
  } else {
    printf("File c:/input.txt doesn't exist in current working directory\n");
  }

  /* Verify if 'docs' folder exists */
  file = opendir("docs");
  if (file) {
    closedir(file);
    printf("Folder docs exists in the current working directory\n");
  } else {
    printf("Folder docs doesn't exist in current working directory\n");
  }

  /* Verify if 'c:/docs' folder exists */
  file = opendir("c:\\docs");
  if (file) {
    closedir(file);
    printf("Folder c:/docs exists in the current working directory\n");
  } else {
    printf("Folder c:/docs doesn't exist in current working directory\n");
  }
  return 0;
}