#include <stdbool.h>
#include <stdio.h>
#include <windows.h>

// Function prototype for recursively iterating over all files in a given path
void enumerateFiles(const char *path);

int main() {
  // File existence check within the current working directory (where your
  // executable is located)
  bool fileExistsCurrent = false;
  HANDLE hFindFile;
  WIN32_FIND_DATA ffd;
  const char *searchPattern = "input.txt";

  hFindFile = FindFirstFile(searchPattern, &ffd);
  if (hFindFile != INVALID_HANDLE_VALUE) {
    do {
      fileExistsCurrent = true;
    } while (FindNextFile(hFindFile, &ffd));
    FindClose(hFindFile);
  }

  // File existence check in the filesystem root
  bool fileExistsRoot = false;
  HANDLE hFindRootFile;
  const char *searchPatternRoot = "C:/input.txt";

  hFindRootFile = FindFirstFile(searchPatternRoot, &ffd);
  if (hFindRootFile != INVALID_HANDLE_VALUE) {
    do {
      fileExistsRoot = true;
    } while (FindNextFile(hFindRootFile, &ffd));
    FindClose(hFindRootFile);
  }

  // Directory existence check within the current working directory and
  // filesystem root
  bool dirExistsCurrent = false;
  HANDLE hFindDir;
  const char *searchPatternDir = "docs";

  hFindDir = FindFirstFile(searchPatternDir, &ffd);
  if (hFindDir != INVALID_HANDLE_VALUE) {
    do {
      dirExistsCurrent = true;
    } while (FindNextFile(hFindDir, &ffd));
    FindClose(hFindDir);
  }

  bool dirExistsRoot = false;
  HANDLE hFindRootDir;
  const char *searchPatternRootDir = "c:/docs";

  hFindRootDir = FindFirstFile(searchPatternRootDir, &ffd);
  if (hFindRootDir != INVALID_HANDLE_VALUE) {
    do {
      dirExistsRoot = true;
    } while (FindNextFile(hFindRootDir, &ffd));
    FindClose(hFindRootDir);
  }

  // Print the results of existence checks
  printf("File exists in current directory: %s\n",
         fileExistsCurrent ? "Yes" : "No");
  printf("File exists at filesystem root: %s\n", fileExistsRoot ? "Yes" : "No");
  printf("Directory exists in current directory: %s\n",
         dirExistsCurrent ? "Yes" : "No");
  printf("Directory exists at filesystem root: %s\n",
         dirExistsRoot ? "Yes" : "No");

  // Optional: Iterate over all files in the given path (if applicable)
  const char *path = "./"; // Path where you want to enumerate files. Replace
                           // with your desired directory.
  printf("Iterating over all files in '%s':\n", path);
  enumerateFiles(path);

  return 0;
}

void enumerateFiles(const char *path) {
  HANDLE hFindFile;
  WIN32_FIND_DATA ffd;
  const char *searchPattern = "*.*"; // Matches all files recursively

  hFindFile = FindFirstFile(searchPattern, &ffd);
  if (hFindFile != INVALID_HANDLE_VALUE) {
    do {
      printf("%s\n", ffd.cFileName);
    } while (FindNextFile(hFindFile, &ffd));
    FindClose(hFindFile);
  }
}