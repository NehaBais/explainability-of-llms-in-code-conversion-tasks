#include
int main() {
  // Verify file exists in current working directory
  struct _stat buf;
  if (_stat("input.txt", &buf) == 0) {
    printf("File 'input.txt' exists in current working directoryn");
  } else {
    printf("File 'input.txt' does not exist in current working directoryn");
  }
  // Verify file exists in root directory
  if (_stat("/input.txt", &buf) == 0) {
    printf("File 'input.txt' exists in root directoryn");
  } else {
    printf("File 'input.txt' does not exist in root directoryn");
  }
  // Verify folder exists in current working directory
  if (_stat("docs", &buf) == 0) {
    printf("Folder 'docs' exists in current working directoryn");
  } else {
    printf("Folder 'docs' does not exist in current working directoryn");
  }
  // Verify folder exists in root directory
  if (_stat("/docs", &buf) == 0) {
    printf("Folder 'docs' exists in root directoryn");
  } else {
    printf("Folder 'docs' does not exist in root directoryn");
  }
  return 0;
}