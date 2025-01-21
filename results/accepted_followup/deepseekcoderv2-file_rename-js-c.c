#include <stdio.h>   // For standard I/O operations
#include <windows.h> // For Windows API functions

void RenameFilesAndFolders() {
  // Create a new instance of the FileSystemObject (simulated using Windows API)

  try {
    // Move file in current working directory
    if (!MoveFile("input.txt", "output.txt")) {
      printf("Failed to move input.txt to output.txt\n");
    }

    // Move file in filesystem root
    if (!MoveFile("c:/input.txt", "c:/output.txt")) {
      printf("Failed to move c:/input.txt to c:/output.txt\n");
    }

    // Move folder in current working directory
    if (!MoveFile("docs", "mydocs")) {
      printf("Failed to move docs to mydocs\n");
    }

    // Move folder in filesystem root
    if (!MoveFile("c:/docs", "c:/mydocs")) {
      printf("Failed to move c:/docs to c:/mydocs\n");
    }
  } catch (CFileException *e) {
    // Handle exceptions if necessary
    e->ReportError();
    e->Delete();
  }
}