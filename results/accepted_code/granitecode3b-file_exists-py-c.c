#include
#include
int main() {
  struct stat st;

  // Check if input.txt exists in the current working directory
  if (stat("input.txt", &st) == 0 && S_ISREG(st.st_mode)) {
    printf("Input file exists.\n");
  } else {
    printf("Input file does not exist.\n");
  }

  // Check if docs exists in the current working directory
  if (stat("docs", &st) == 0 && S_ISDIR(st.st_mode)) {
    printf("Docs directory exists.\n");
  } else {
    printf("Docs directory does not exist.\n");
  }

  // Check if input.txt exists in the filesystem root
  if (stat("/input.txt", &st) == 0 && S_ISREG(st.st_mode)) {
    printf("Input file exists in /input.txt.\n");
  } else {
    printf("Input file does not exist in /input.txt.\n");
  }

  // Check if docs exists in the filesystem root
  if (stat("/docs", &st) == 0 && S_ISDIR(st.st_mode)) {
    printf("Docs directory exists in /docs.\n");
  } else {
    printf("Docs directory does not exist in /docs.\n");
  }

  return 0;
}