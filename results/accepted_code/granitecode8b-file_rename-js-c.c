#include
int main() {
  // Rename file in current working directory
  _rename("input.txt", "output.txt");

  // Rename file in filesystem root
  _rename("c:/input.txt", "c:/output.txt");

  // Rename directory in current working directory
  _rmdir("docs");
  _mkdir("mydocs");

  // Rename directory in filesystem root
  _rmdir("c:/docs");
  _mkdir("c:/mydocs");

  return 0;
}