Here's the equivalent C++ code for the given JavaScript code:
```
#include 
#include 
int main() {
 Windows::Storage::FileIO fileIO = Windows::Storage::FileIO::imread(L"input.txt");
 if (fileIO.getFileExists()) {
 long long size = fileIO.readTextAsync().get();
 std::wcout << L"Size of input.txt in the current working directory: " << size << std::endl;
 }
 Windows::Storage::StorageFolder rootFolder = Windows::Storage::ApplicationData::current()->localFolder();
 Windows::Storage::FileIO fileIO2 = Windows::Storage::FileIO::readTextAsync(rootFolder, L"input.txt").get();
 if (fileIO2.getFileExists()) {
 long long size2 = fileIO2.readTextAsync().get();
 std::wcout << L"Size of input.txt in the file system root: " << size2 << std::endl;
 }
 return 0;
}
```
This code uses the Windows::Storage namespace to access the current working directory and the file system root, read the contents of the input.txt file in both locations, and output the size of the file in bytes. Note that this code requires the Windows Runtime API for C++ (WinRT) and is only supported on Windows 10 devices running Windows 10 or later.

