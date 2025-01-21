#include <iostream>
#include <windows.h>

int main() {
  // Get file size in current working directory.
  WIN32_FILE_ATTRIBUTE_DATA fileAttrib;
  if (GetFileAttributesEx("input.txt", GetFileExInfoStandard, &fileAttrib)) {
    ULARGE_INTEGER fileSize = fileAttrib.nFileSizeHigh;
    fileSize.QuadPart += fileAttrib.nFileSizeLow;
    std::cout << "Size of 'input.txt' in the current working directory is: "
              << fileSize.QuadPart << " bytes." << std::endl;
  } else {
    std::cerr << "Failed to get attributes for 'input.txt'" << std::endl;
  }

  // Get file size in root of the C drive.
  if (GetFileAttributesEx("C:\\input.txt", GetFileExInfoStandard,
                          &fileAttrib)) {
    ULARGE_INTEGER fileSize = fileAttrib.nFileSizeHigh;
    fileSize.QuadPart += fileAttrib.nFileSizeLow;
    std::cout << "Size of 'input.txt' in the root of C drive is: "
              << fileSize.QuadPart << " bytes." << std::endl;
  } else {
    std::cerr << "Failed to get attributes for 'C:\\input.txt'" << std::endl;
  }

  return 0;
}