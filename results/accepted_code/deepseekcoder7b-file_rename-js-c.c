#include <dirent.h>
#include <stdio.h>

int main() {
  // Rename a file from current directory to another name
  rename("input.txt", "output.txt");

  // Move a file from current directory to root directory
  // Please run this program with sudo or as administrator for the below
  // operation
  rename("c:/input.txt", "/output.txt");

  // Rename a directory from current directory to another name
  rename("docs", "mydocs");

  // Move a directory from current directory to root directory
  // Please run this program with sudo or as administrator for the below
  // operation
  rename("c:/docs", "/mydocs");

  return <｜begin▁of▁sentence｜ > 0;
}