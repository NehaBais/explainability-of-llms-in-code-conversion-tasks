#include <string>
#include <windows.h>

void moveFile(std::wstring sourcePath, std::wstring destinationPath) {
  MoveFileEx(sourcePath.c_str(), 0, destinationPath.c_str(),
             MOVEFILE_REPLACE_EXISTING | MOVEFILE_COPY_HARDLINK);
}

void moveDirectory(std::wstring sourcePath, std::wstring destinationPath) {
  SHCreateDirectory(destinationPath.c_str(), NULL);
  SHFileOperation(NULL, FO_MOVE, sourcePath.c_str(), destinationPath.c_str(), 0,
                  FOF_NOCONFIRMATION, NULL, NULL);
}

int main() {
  // Move files in the current working directory
  moveFile(L"input.txt", L"output.txt");
  moveFile(L"c:/input.txt", L"c:/output.txt");

  // Move folders in the current working directory
  moveDirectory(L"docs", L"mydocs");
  moveDirectory(L"c:/docs", L"c:/mydocs");

  return 0;
}