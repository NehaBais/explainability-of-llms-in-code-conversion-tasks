#include <filesystem>
#include <future>
#include <iostream>
#include <string>

void mkdirp(const std::string &path,
            const std::function<void(std::error_code)> &cb) {
  if (std::filesystem::exists(path))
    return cb({});
  try {
    std::filesystem::create_directories(path);
    cb({});
  } catch (const std::exception &e) {
    cb(e.code());
  }
}

int main() {
  mkdirp("/path/to/dir", [](std::error_code ec) {
    if (ec.value() == 0) {
      std::cout << "Directory created successfully." << std::endl;
    } else {
      std::cerr << "Error creating directory: " << ec.message() << std::endl;
    }
  });
}