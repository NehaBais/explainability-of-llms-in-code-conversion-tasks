#include <cstdlib> // for std::system
#include <iostream>

bool mkdir_p(const char *path) {
  char sep = '/';
#ifdef _WIN32
  sep = '\\';
#endif

  char *copy = new char[strlen(path) + 1];
  strcpy(copy, path);

  char *ptr = &copy[0];
  ptr[0] = sep; // first character must be '/' or '\' on windows.
  for (; *ptr != '\0'; ++ptr) {
    if (*ptr == sep) {
      *ptr = '\0';
      std::system(copy);
      *ptr = sep;
    }
  }
  delete[] copy;
  return true;
}
int main() {
  try {
    mkdir_p("C:/parent/test");
    std::cout << "Path successfully created.\n";
    return EXIT_SUCCESS;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return EXIT_FAILURE;
  }
}