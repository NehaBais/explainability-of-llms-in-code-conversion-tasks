#include <sys/stat.h>
#include <unistd.h>
int main() {
  rename("input.txt", "output.txt");
  rename("docs", "mydocs");
  rename("/input.txt", "/output.txt");
  rename("/docs", "/mydocs");
}