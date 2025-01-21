#include
#include
int main() {
  struct _stat buf;
  if (_stat("input.txt", &buf) == 0) {
    printf("File 'input.txt' exists in current working directoryn");
  } else {
    printf("File 'input.txt' does not exist in current working directoryn");
  }
  if (_stat("/input.txt", &buf) == 0) {
    printf("File 'input.txt' exists in root directoryn");
  } else {
    printf("File 'input.txt' does not exist in root directoryn");
  }
  if (_stat("docs", &buf) == 0) {
    printf("Folder 'docs' exists in current working directoryn");
  } else {
    printf("Folder 'docs' does not exist in current working directoryn");
  }
  if (_stat("/docs", &buf) == 0) {
    printf("Folder 'docs' exists in root directoryn");
  } else {
    printf("Folder 'docs' does not exist in root directoryn");
  }
  return 0;
}