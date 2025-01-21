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
    mkdir("", 0755); // Replace "" with the actual path to create directory
    return;
  }
  mkdir(path.substr(0, last_slash).c_str(),
        0755); // Replace "" with the actual path to create directory
  mkdir_all(path.substr(last_slash + 1));
}

int main() {
  mkdir_all("/tmp/some/path/to/dir");
  return 0;
}