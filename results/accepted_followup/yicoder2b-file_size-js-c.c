#include <stdio.h>
#include <windows.h> // Include for Windows

int main() {
  HANDLE hFile = CreateFile("input.txt", FILE_READ_ATTRIBUTES, 0, NULL,
                            OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
  if (hFile == INVALID_HANDLE_VALUE) {
    printf("Failed to open file 'input.txt'.\n");
    return 1;
  }

  LARGE_INTEGER lSize;
  if (!GetFileSizeEx(hFile, &lSize)) {
    CloseHandle(hFile);
    printf("Failed to get file size of 'input.txt'.\n");
    return 2;
  }

  printf("The file 'input.txt' has %I64u bytes.\n", lSize.QuadPart);

  hFile = CreateFile("c:\\input.txt", FILE_READ_ATTRIBUTES, 0, NULL,
                     OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
  if (hFile == INVALID_HANDLE_VALUE) {
    CloseHandle(hFile);
    printf("Failed to open file 'c:\\input.txt'.\n");
    return 3;
  }

  if (!GetFileSizeEx(hFile, &lSize)) {
    CloseHandle(hFile);
    printf("Failed to get file size of 'c:\\input.txt'.\n");
    return 4;
  }

  printf("The file 'c:\\input.txt' has %I64u bytes.\n", lSize.QuadPart);
  return 0;
}