#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef _WIN32
#include <windows.h>
int rename(const char *oldname, const char *newname) {
  BOOL result = MoveFile(oldname, newname);
  if (result != 0)
    return 0;
  else
    return -1;
}
#else
#include <unistd.h>
int rename(const char *oldname, const char *newname) {
  return rename(oldname, newname);
}
#endif
int main() {
  // Test the renaming functionality in both current and root directories
  rename("input.txt", "output.txt");
  rename("/input.txt", "/output.txt");

  rename("docs", "mydocs");
  rename("/docs", "/mydocs");

  printf("File renamed successfully.\n");
  return 0;
}