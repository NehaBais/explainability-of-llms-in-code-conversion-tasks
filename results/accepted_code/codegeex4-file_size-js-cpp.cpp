#include <iostream>
#include <windows.h>

using namespace std;

int main() {
  // Get file size of input.txt in current working directory
  WIN32_FIND_DATA FindFileData;
  HANDLE hFind = FindFirstFile("input.txt", &FindFileData);
  if (hFind != INVALID_HANDLE_VALUE) {
    LARGE_INTEGER size;
    size.LowPart = FindFileData.nFileSizeLow;
    size.HighPart = FindFileData.nFileSizeHigh;
    cout << "Size of 'input.txt' in current working directory: "
         << size.QuadPart << endl;

    FindClose(hFind);
  } else {
    wcout << L"File not found!" << endl;
  }

  // Get file size of input.txt in root directory
  hFind = FindFirstFile("c:/input.txt", &FindFileData);
  if (hFind != INVALID_HANDLE_VALUE) {
    LARGE_INTEGER size;
    size.LowPart = FindFileData.nFileSizeLow;
    size.HighPart = FindFileData.nFileSizeHigh;
    cout << "Size of 'input.txt' in root directory: " << size.QuadPart << endl;

    FindClose(hFind);
  } else {
    wcout << L"File not found!" << endl;
  }

  return 0;
}