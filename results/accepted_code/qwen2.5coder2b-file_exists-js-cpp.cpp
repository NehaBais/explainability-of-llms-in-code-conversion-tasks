#include <fstream>
#include <iostream>
#include <sys/stat.h>

using namespace std;

int main() {
  // Create a new instance of the filesystem object
  const char *fileSystemName = "Scripting.FileSystemObject";
  IFileSystemObject *fso = CreateObject(fileSystemName);
  if (!fso) {
    cerr << "Could not create FileSystemObject." << endl;
    return 1;
  }

  // File and Directory Verification for current working directory
  string currentDirectoryPath = ".";

  try {
    fso->FileExists(currentDirectoryPath + "\\input.txt");
    fso->FolderExists(currentDirectoryPath + "\\docs");
  } catch (const char *exception) {
    cerr << "Error verifying files and directories in the current directory: "
         << exception << endl;
    return 1;
  }

  // File and Directory Verification for root of the filesystem
  try {
    fso->FileExists("input.txt");
    fso->FolderExists("docs");
  } catch (const char *exception) {
    cerr << "Error verifying files and directories in the system root: "
         << exception << endl;
    return 1;
  }

  // Release the FileSystemObject
  fso->Release();

  return 0;
}