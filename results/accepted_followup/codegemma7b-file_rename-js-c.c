#include <windows.h>

int main() {
  MoveFile("input.txt", "output.txt");
  MoveFile("c:/input.txt", "c:/output.txt");
  MoveFolder("docs", "mydocs");
  MoveFolder("c:/docs", "c:/mydocs");

  return 0;
}