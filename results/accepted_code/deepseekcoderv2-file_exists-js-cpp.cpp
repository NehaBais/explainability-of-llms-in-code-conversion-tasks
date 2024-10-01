#include <windows.h>

int main() {
  char input_file[] = "input.txt";
  char root_directory[] = "/";
  char folder[] = "docs/";

  // Check if file exists in current directory
  HANDLE handle = CreateFile(input_file, GENERIC_READ, FILE_SHARE_READ, NULL,
                             OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
  BOOL result = GetLastError() == ERROR_FILE_NOT_FOUND;
  CloseHandle(handle);

  if (result) {
    printf("File %s does not exist in current directory.\n", input_file);
  } else {
    printf("File %s exists in current directory.\n", input_file);
  }

  // Check if file exists in root directory
  handle = CreateFile(root_directory, GENERIC_READ, FILE_SHARE_READ, NULL,
                      OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
  result = GetLastError() == ERROR_FILE_NOT_FOUND;
  CloseHandle(handle);

  if (result) {
    printf("File %s does not exist in root directory.\n", input_file);
  } else {
    printf("File %s exists in root directory.\n", input_file);
  }

  // Check if folder exists in current directory
  handle = CreateFile(folder, GENERIC_READ, FILE_SHARE_READ, NULL,
                      OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
  result = GetLastError() == ERROR_FILE_NOT_FOUND;
  CloseHandle(handle);

  if (result) {
    printf("Folder %s does not exist in current directory.\n", folder);
  } else {
    printf("Folder %s exists in current directory.\n", folder);
  }

  // Check if folder exists in root directory
  handle = CreateFile(root_directory, GENERIC_READ, FILE_SHARE_READ, NULL,
                      OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
  result = GetLastError() == ERROR_FILE_NOT_FOUND;
  CloseHandle(handle);

  if (result) {
    printf("Folder %s does not exist in root directory.\n", folder);
  } else {
    printf("Folder %s exists in root directory.\n", folder);
  }

  return 0;
}