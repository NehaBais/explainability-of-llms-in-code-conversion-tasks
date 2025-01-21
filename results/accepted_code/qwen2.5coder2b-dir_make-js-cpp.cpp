#include <filesystem>
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