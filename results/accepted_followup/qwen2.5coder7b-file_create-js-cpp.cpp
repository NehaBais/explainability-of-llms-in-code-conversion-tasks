#include <cstdlib>
#include <fstream>
#include <iostream>

void fct(const char *path) {
  if (path == nullptr || *path == '\0') {
    std::cerr << "Invalid path" << std::endl;
    return;
  }

  FILE *file = fopen(path, "w");
  if (!file) {
    perror("Error opening file");
    return;
  }
  fclose(file);
}

int main() {
  char cwd[1024];
  getcwd(cwd, sizeof(cwd));
  fct(strcat(cwd, "/output.txt"));
  fct("/output.txt");

  mkdir("docs", 0755);
  mkdir("/docs", 0755);

  return 0;
}