#include
#include
int main() {
  struct stat st;

  if (stat("input.txt", &st) == 0 && S_ISREG(st.st_mode)) {
    printf("Input file exists.\n");
  } else {
    printf("Input file does not exist.\n");
  }

  if (stat("docs", &st) == 0 && S_ISDIR(st.st_mode)) {
    printf("Docs directory exists.\n");
  } else {
    printf("Docs directory does not exist.\n");
  }

  return 0;
}