#include <direct.h>  //For directory operations
#include <stdio.h>   //For file existence check functions
#include <windows.h> //For system function in C++

int main() {
  HRESULT hr;

  _strset_s(szPath, _countof(szPath), 'C', _T(':'), _T('/'));
  if (!fso.FileExists(szPath)) {
    // The file does not exist
  }

  if (!fso.FolderExists(szPath)) {
    // The folder does not exist
  }

  return 0;
}