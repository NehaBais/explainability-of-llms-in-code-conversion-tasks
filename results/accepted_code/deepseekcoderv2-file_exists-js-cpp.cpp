#include <iostream>
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
  // Check for the current working directory
  std::wstring inputPath1 = L"input.txt";
  std::wstring docsPath1 = L"docs";

  if (FileExists(inputPath1) && DirectoryExists(docsPath1)) {
    std::wcout << "Both file '" << inputPath1 << "' and directory '"
               << docsPath1 << "' exist in the current working directory."
               << std::endl;
  } else {
    std::wcout << "Either file '" << inputPath1 << "' or directory '"
               << docsPath1
               << "' does not exist in the current working directory."
               << std::endl;
  }

  // Check for the filesystem root (assuming C: drive)
  std::wstring inputPath2 = L"c:/input.txt";
  std::wstring docsPath2 = L"c:/docs";

  if (FileExists(inputPath2) && DirectoryExists(docsPath2)) {
    std::wcout << "Both file '" << inputPath2 << "' and directory '"
               << docsPath2 << "' exist in the filesystem root." << std::endl;
  } else {
    std::wcout << "Either file '" << inputPath2 << "' or directory '"
               << docsPath2 << "' does not exist in the filesystem root."
               << std::endl;
  }

  return 0;
}