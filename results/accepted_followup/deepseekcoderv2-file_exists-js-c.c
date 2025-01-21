#include <stdio.h>
#include <string>
#include <windows.h>

bool FileExists(const std::wstring &path) {
  DWORD fileAttributes = GetFileAttributesW(path.c_str());
  return (fileAttributes != INVALID_FILE_ATTRIBUTES &&
          !(fileAttributes & FILE_ATTRIBUTE_DIRECTORY));
}

bool DirectoryExists(const std::wstring &path) {
  DWORD fileAttributes = GetFileAttributesW(path.c_str());
  return (fileAttributes != INVALID_FILE_ATTRIBUTES &&
          (fileAttributes & FILE_ATTRIBUTE_DIRECTORY));
}

int main() {
  // Current working directory check
  std::wstring currentWorkingDirPath = L"input.txt";
  std::wstring rootDirPath = L"c:/input.txt";
  std::wstring docsDirPath = L"docs";
  std::wstring rootDocsDirPath = L"c:/docs";

  bool fileExistsInCurrentWorkingDir = FileExists(currentWorkingDirPath);
  bool fileExistsInRootDir = FileExists(rootDirPath);
  bool dirExistsInCurrentWorkingDir = DirectoryExists(docsDirPath);
  bool dirExistsInRootDir = DirectoryExists(rootDocsDirPath);

  // Output the results
  printf("File exists in current working directory: %s\n",
         fileExistsInCurrentWorkingDir ? "true" : "false");
  printf("File exists in root directory: %s\n",
         fileExistsInRootDir ? "true" : "false");
  printf("Directory exists in current working directory: %s\n",
         dirExistsInCurrentWorkingDir ? "true" : "false");
  printf("Directory exists in root directory: %s\n",
         dirExistsInRootDir ? "true" : "false");

  return 0;
}