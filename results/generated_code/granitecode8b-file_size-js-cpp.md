Here is the code converted from JavaScript to C++:
```
#include 
#include 
#include 
int main() {
 std::wstring input_file = L"input.txt";
 std::wstring root_path = L"c:/";
 // Get file size in current working directory
 WIN32_FILE_ATTRIBUTE_DATA fad;
 if (GetFileAttributesEx(input_file.c_str(), GetFileExInfoStandard, &fad)) {
 std::wcout << "File size in current working directory: " << fad.nFileSizeLow << " bytes" << std::endl;
 } else {
 std::wcerr << L"Error getting file size in current working directory" << std::endl;
 }
 // Get file size in root path
 input_file = root_path + input_file;
 if (GetFileAttributesEx(input_file.c_str(), GetFileExInfoStandard, &fad)) {
 std::wcout << "File size in root path: " << fad.nFileSizeLow << " bytes" << std::endl;
 } else {
 std::wcerr << L"Error getting file size in root path" << std::endl;
 }
 return 0;
}
```
Note that this code uses the Windows API to access file attributes and sizes, so it may not work on non-Windows systems. Additionally, the code assumes that the input.txt file exists in the current working directory and the root path specified by the user. If these files do not exist, an error message will be printed to the console.

