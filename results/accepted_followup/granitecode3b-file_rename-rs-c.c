#include
#include
const char *err = "File move error";
int main() {
  if (rename("input.txt", "output.txt") == -1) {
    perror(err);
  }
  if (rename("docs", "mydocs") == -1) {
    perror(err);
  }
  if (rename("/input.txt", "/output.txt") == -1) {
    perror(err);
  }
  if (rename("/docs", "/mydocs") == -1) {
    perror(err);
  }
  return 0;
}