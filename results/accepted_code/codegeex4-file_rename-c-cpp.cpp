#include <iostream>
#include <unistd.h>

int main() {
  std::string input = "./input.txt";
  std::string output = "./output.txt";
  std::string docs = "./docs";
  std::string mydocs = "./mydocs";

  if (rename(input.c_str(), output.c_str()) != 0) {
    perror("rename");
    return -1;
  }

  if (rename(docs.c_str(), mydocs.c_str()) != 0) {
    perror("rename");
    return -1;
  }

  input = "/input.txt";
  output = "/output.txt";
  docs = "/docs";
  mydocs = "/mydocs";

  if (chdir("/") != 0) {
    perror("chdir");
    return -1;
  }

  if (rename(input.c_str(), output.c_str()) != 0) {
    perror("rename");
    return -1;
  }

  if (rename(docs.c_str(), mydocs.c_str()) != 0) {
    perror("rename");
    return -1;
  }

  return 0;
}