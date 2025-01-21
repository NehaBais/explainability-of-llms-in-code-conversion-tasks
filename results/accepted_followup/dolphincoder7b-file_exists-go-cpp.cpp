#include <iostream>
#include <string>
#include <sys/stat.h>

int main() {
  printStat("input.txt");
  printStat("/input.txt");
  printStat("docs");
  printStat("/docs");

  return 0;
}