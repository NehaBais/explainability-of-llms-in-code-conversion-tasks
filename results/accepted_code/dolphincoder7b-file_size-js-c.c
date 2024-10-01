#include "windows.h" // This includes the necessary functions for file operations
#include <stdio.h>

int main() {
  WIN32_FIND_DATA ffd;
  HANDLE hFind = INVALID_HANDLE_VALUE;

  char szDir[MAX_PATH];
  GetCurrentDirectory(sizeof(szDir), szDir);
  strcat(szDir, "\\input.txt");

  if ((hFind = FindFirstFile(szDir, &ffd)) == INVALID_HANDLE_VALUE) {
    printf("Error: Unable to find the file.\n");
    return 1;
  } else {
    printf("%s\n", szDir);
    printf("Size of input.txt is %d bytes.\n", ffd.nFileSizeLow);
  }

  strcat(szDir, "\\..\\input.txt");

  if ((hFind = FindFirstFile(szDir, &ffd)) == INVALID_HANDLE_VALUE) {
    printf("Error: Unable to find the file in root.\n");
    return 1;
  } else {
    printf("%s\n", szDir);
    printf("Size of input.txt in root is %d bytes.\n", ffd.nFileSizeLow);
  }

  FindClose(hFind);
  return 0;
}