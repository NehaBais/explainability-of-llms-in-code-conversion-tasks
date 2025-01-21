#include <stdio.h>   // Include standard I/O library
#include <windows.h> // Include windows header for file operations

int main() {
  DWORD size;

  // Check the size of input.txt in the current working directory
  HANDLE hFile = CreateFile("input.txt", GENERIC_READ, FILE_SHARE_READ, NULL,
                            OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
  if (hFile == INVALID_HANDLE_VALUE) {
    printf("Error opening file in current directory.\n");
    return 1;
  } else {
    size = GetFileSize(hFile, NULL);
    CloseHandle(hFile);
    printf("Size of input.txt in current directory: %lu bytes\n", size);
  }

  // Check the size of c:/input.txt
  hFile = CreateFile("c:\\input.txt", GENERIC_READ, FILE_SHARE_READ, NULL,
                     OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
  if (hFile == INVALID_HANDLE_VALUE) {
    printf("Error opening file in root directory.\n");
    return 1;
  } else {
    size = GetFileSize(hFile, NULL);
    CloseHandle(hFile);
    printf("Size of c:\\input.txt: %lu bytes\n", size);
  }

  return 0;
}