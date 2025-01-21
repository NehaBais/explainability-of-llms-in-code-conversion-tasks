#include <afx.h>     // MFC core and standard components
#include <afxdisp.h> // MFC definitions for OLE automation classes

void RenameFilesAndFolders() {
  // Create a new instance of the FileSystemObject
  CFileSystem fso;

  try {
    // Move file in current working directory
    fso.MoveFile(_T("input.txt"), _T("output.txt"));

    // Move file in filesystem root
    fso.MoveFile(_T("c:/input.txt"), _T("c:/output.txt"));

    // Move folder in current working directory
    fso.MoveFolder(_T("docs"), _T("mydocs"));

    // Move folder in filesystem root
    fso.MoveFolder(_T("c:/docs"), _T("c:/mydocs"));
  } catch (CFileException *e) {
    // Handle exceptions if necessary
    e->ReportError();
    e->Delete();
  }
}