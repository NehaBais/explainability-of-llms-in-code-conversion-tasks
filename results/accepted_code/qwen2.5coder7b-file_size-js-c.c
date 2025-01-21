#include <stdio.h>
#include <windows.h>

int getFileSize(const char *filePath) {
  HANDLE hFile = CreateFile(filePath, GENERIC_READ, FILE_SHARE_READ, NULL,
                            OPEN_EXISTING, 0, NULL);
  if (hFile == INVALID_HANDLE_VALUE) {
    printf("Error opening file: %s\n", filePath);
    return -1;
  }

  DWORD fileSizeHigh = 0;
  DWORD fileSizeLow = GetFileSize(hFile, &fileSizeHigh);
  if (fileSizeLow == INVALID_FILE_SIZE && GetLastError() != NO_ERROR) {
    printf("Error getting file size for %s\n", filePath);
    CloseHandle(hFile);
    return -1;
  }

  CloseHandle(hFile);
  return (int)(fileSizeHigh * 0x100000000 + fileSizeLow);
}

int main() {
  int size = getFileSize("input.txt");
  if (size != -1) {
    printf("Size of 'input.txt' in current directory: %d bytes\n", size);
  }

  size = getFileSize("c:/input.txt");
  if (size != -1) {
    printf("Size of 'input.txt' at root of C drive: %d bytes\n", size);
  }

  return 0;
}