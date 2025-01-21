#include
void rename(const char *oldpath, const char *newpath) {
  // Function implementation goes here
}
int main() {
  rename("input.txt", "output.txt");
  rename("docs", "mydocs");
  rename("/input.txt", "/output.txt");
  rename("/docs", "/mydocs");
  return 0;
}