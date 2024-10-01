#include <fstream>
#include <iostream>
#include <sys/stat.h>

void create(const std::string &directory) {
  std::ofstream file;
  file.open(directory + "/output.txt");
  file.close();

  if (mkdir((directory + "/docs").c_str(), 0777) == -1)
    std::cerr << "Error creating directory" << std::endl;
}

int main() {
  create(".");
  create("/");
}