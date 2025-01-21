#include <cstdio>
int main() {
  rename("input.txt", "output.txt");
  rename("docs", "mydocs");
  rename("/input.txt", "/output.txt");
  rename("/docs", "/mydocs");
}