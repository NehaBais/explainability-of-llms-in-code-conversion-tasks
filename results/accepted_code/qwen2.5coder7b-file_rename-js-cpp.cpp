#include <iostream>
#include <string>
#include <windows.h>

void moveFileOrFolder(const std::wstring &fromPath,
                      const std::wstring &toPath) {
  if (MoveFileEx(fromPath.c_str(), toPath.c_str(),
                 MOVEFILE_REPLACE_EXISTING | MOVEFILE_COPY_ALLOWED)) {
    std::wcout << L"Successfully moved " << fromPath << L" to " << toPath
               << std::endl;
  } else {
    DWORD error = GetLastError();
    std::wcerr << L"Failed to move " << fromPath << L" to " << toPath
               << L". Error: " << error << std::endl;
  }
}

int main() {
  // Move file in the current working directory
  std::wstring currentDir = L".\\";
  moveFileOrFolder(currentDir + L"input.txt", currentDir + L"output.txt");
  moveFileOrFolder(currentDir + L"docs", currentDir + L"mydocs");

  // Move file in the filesystem root
  std::wstring rootDir = L"C:\\";
  moveFileOrFolder(rootDir + L"input.txt", rootDir + L"output.txt");
  moveFileOrFolder(rootDir + L"docs", rootDir + L"mydocs");

  return 0;
}