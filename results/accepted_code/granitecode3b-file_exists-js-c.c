#include
int main() {
  struct _finddata_t fileinfo;
  char buffer[256];
  int retcode;

  // Verify that input.txt exists in the current working directory
  retcode = _findfirst("input.txt", &fileinfo);
  if (retcode == 0) {
    printf("Input file found\n");
  } else {
    printf("Input file not found\n");
  }

  // Verify that input.txt exists in the filesystem root
  retcode = _findfirst("/input.txt", &fileinfo);
  if (retcode == 0) {
    printf("Input file found in / directory\n");
  } else {
    printf("Input file not found in / directory\n");
  }

  // Verify that docs exists in the current working directory
  retcode = _findfirst("docs", &fileinfo);
  if (retcode == 0) {
    printf("Docs folder found\n");
  } else {
    printf("Docs folder not found\n");
  }

  // Verify that docs exists in the filesystem root
  retcode = _findfirst("/docs", &fileinfo);
  if (retcode == 0) {
    printf("Docs folder found in / directory\n");
  } else {
    printf("Docs folder not found in / directory\n");
  }

  return 0;
}