#include <windows.h>
int main() {
  SetCurrentDirectory(L"C:\\");
  ShellExecute(NULL, L"open", L"cmd.exe", NULL, NULL,
               SW_SHOWNORMAL);        // opens command prompt in cwd
  system("ren input.txt output.txt"); // rename
  system("cd ..");
  system("del mydocs\\*.*");
  return 0;
}