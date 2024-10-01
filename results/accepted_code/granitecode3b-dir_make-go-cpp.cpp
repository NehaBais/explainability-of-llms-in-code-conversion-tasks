#include
#include
#include
#ifdef _WIN32
#include
#else
#include
#endif

std::string get_directory(const std::string &path) {
  size_t last_slash = path.find_last_of("/\\");
  if (last_slash == std::string::npos) {
    return "";
  }
  return path.substr(0, last_slash);
}

void mkdir_all(const std::string &path) {
  size_t last_slash = path.find_last_of("/\\");
  if (last_slash == std::string::npos) {
    mkdir(path.c_str(), 0770);
    return;
  }

  std::string directory = get_directory(path);
  mkdir_all(directory);
  mkdir((path + "/").c_str(), 0770);
}

int main() {
  try {
    mkdir_all("/tmp/some/path/to/dir");
  } catch (std::exception &e) {
    std::cerr << "Error creating directory: " << e.what() << std::endl;
    return 1;
  }

  return 0;
}