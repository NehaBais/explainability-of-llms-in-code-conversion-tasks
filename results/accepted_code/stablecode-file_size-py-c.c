#include <stdio.h>
#include <string.h>
#ifdef _WIN32
#include <windows.h>
#define PATH_SEPARATOR "\\"
#define getcwd _getcwd
#else
#include <unistd.h>
#define PATH_SEPARATOR "/"
#endif

int main(void) {
  char cPath[1024];
  size_t size;

  // Get the current working directory
  if ((getcwd(cPath, sizeof(cPath))) != NULL) {
    printf("Current Working Directory: %s\n", cPath);
  } else {
    fprintf(stderr, "Failed to get current working directory.\n");
    return 1; // Return error code
  }

  // Check file size in the current working directory
  if ((size = (getcwd(cPath, sizeof(cPath))) != NULL) &&
      ((strcat(cPath, "/input.txt")), fopen(cPath, "rb")) != NULL) {
    fseek(stdout(), 0, SEEK_END);
    printf("Size of input.txt in the current working directory: %llu bytes.\n",
           (unsigned long long)ftell(stdout()));

    fclose(stdout());
  } else {
    fprintf(stderr, "Failed to open or seek in 'input.txt' file in the current "
                    "working directory.\n");
    return 1; // Return error code
  }

  // Check file size in the root of the file system
#ifdef _WIN32
  HANDLE rootDir;
  WIN32_FIND_DATA fileInfo;
  char rootPath[MAX_PATH];
  DWORD dwRet;

  // Get the full path to the root directory
  if ((GetFullPathName("\\", MAX_PATH, rootPath, &dwRet)), strlen(rootPath)) != NULL) {
      printf("Size of input.txt in the root directory: %llu bytes.\n",
             (unsigned long long)GetFileSizeByName(rootPath));
    }
  else {
    fprintf(
        stderr,
        "Failed to get full path name of the root directory or failed to get "
        "file size by name for 'input.txt' file in the root directory.\n");
    return 1; // Return error code
  }

  return 0; // Success
}