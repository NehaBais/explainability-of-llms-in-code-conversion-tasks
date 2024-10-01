#include <stdio.h>
#include <windows.h>
#define MAX_PATH 260

int main() {
  char from[MAX_PATH], to[MAX_PATH];

  /* Rename a file */
  strcpy(from, "input.txt");
  strcpy(to, "output.txt");
  MoveFile(from, to);

  /* Rename a file in another drive */
  strcpy(from, "c:\\input.txt");
  strcpy(to, "c:\\output.txt");
  MoveFile(from, to);

  /* Rename a directory */
  GetFullPathName("docs", MAX_PATH, from, NULL);
  GetFullPathName("mydocs", MAX_PATH, to, NULL);
  if (MoveFileEx(from, to, MOVEFILE_REPLACE_EXISTING) == 0) {
    printf("Unable to rename directory.\n");
    return -1;
  }

  /* Rename a directory in another drive */
  GetFullPathName("c:\\docs", MAX_PATH, from, NULL);
  GetFullPathName("c:\\mydocs", MAX_PATH, to, NULL);
  if (MoveFileEx(from, to, MOVEFILE_REPLACE_EXISTING) == 0) {
    printf("Unable to rename directory.\n");
    return -1;
  }

  return 0;
}