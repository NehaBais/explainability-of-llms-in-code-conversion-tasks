#include
int main() {
  SHELLEXECUTEINFO shExecInfo = {0};
  shExecInfo.cbSize = sizeof(shExecInfo);
  shExecInfo.lpVerb = "open";
  shExecInfo.lpFile = "input.txt";
  shExecInfo.nShow = SW_NORMAL;
  if (ShellExecuteEx(&shExecInfo) <= 32) {
    printf("Error: unable to open file.");
    return 1;
  }
  HANDLE hFile = INVALID_HANDLE_VALUE;
  LPTSTR filePath = TEXT("input.txt");
  DWORD size = GetFileSize(filePath, &hFile);
  if (size == INVALID_FILE_SIZE) {
    printf("Error: unable to get file size.");
    CloseHandle(hFile);
    return 1;
  }
  _tprintf(TEXT("%I64u"), size);
  return 0;
}