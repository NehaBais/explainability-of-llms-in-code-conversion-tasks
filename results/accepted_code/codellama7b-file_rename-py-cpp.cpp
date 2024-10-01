#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
  // Rename file "input.txt" to "output.txt" here
  rename("input.txt", "output.txt");
  // Rename directory "docs" to "mydocs" here
  rename("docs", "mydocs");

  // Rename file "input.txt" to "output.txt" in the filesystem root
  rename(getenv("HOME") + "/input.txt", getenv("HOME") + "/output.txt");
  // Rename directory "docs" to "mydocs" in the filesystem root
  rename(getenv("HOME") + "/docs", getenv("HOME") + "/mydocs");

  return 0;
}