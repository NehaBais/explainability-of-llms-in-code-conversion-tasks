#include <iostream>
#include <string>

void moveFile(std::wstring sourcePath, std::wstring destinationPath) {
  if (!MoveFileEx(sourcePath.c_str(), 0, destinationPath.c_str(),
                  MOVEFILE_REPLACE_EXISTING | MOVEFILE_COPY_HARDLINK)) {
    std::cerr << "Failed to move file!" << std::endl;
    return;
  }
}

void moveDirectory(std::wstring sourcePath, std::wstring destinationPath) {
  if (!SHCreateDirectory(destinationPath.c_str(), NULL)) {
    std::cerr << "Failed to create directory!" << std::endl;
    return;
  }
  SHFileOperation(NULL, FO_MOVE, sourcePath.c_str(), destinationPath.c_str(), 0,
                  FOF_NOCONFIRMATION, NULL, NULL);
}

int main() {
  moveFile(L"input.txt", L"output.txt");
  moveFile(L"c:/input.txt", L"c:/output.txt");

  moveDirectory(L"docs", L"mydocs");
  moveDirectory(L"c:/docs", L"c:/mydocs");

  return 0;
}