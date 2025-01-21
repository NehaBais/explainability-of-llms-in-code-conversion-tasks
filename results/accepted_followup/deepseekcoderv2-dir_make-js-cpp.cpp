#include <filesystem>
#include <iostream>
#include <system_error> // For std::error_code

namespace fs = std::filesystem;

void mkdirp(const std::string &path, std::function<void(std::error_code)> cb) {
  if (!cb)
    cb = [](std::error_code) {};
  auto resolvedPath = fs::path(path);

  if (!fs::exists(resolvedPath)) {
    mkdirp(resolvedPath.parent_path().string(), [cb](std::error_code er) {
      if (er)
        cb(er);
      else
        mkdirp(resolvedPath.string(), cb);
    });
  } else if (cb) {
    cb({}); // Successfully reached the directory that exists or was created.
  }
}

int main() {
  std::string dirPath = "./path/to/dir";
  mkdirp(dirPath, [](std::error_code er) {
    if (er) {
      std::cerr << "Error: " << er.message() << '\n';
    } else {
      std::cout << "Directory created successfully.\n";
    }
  });
  return 0;
}