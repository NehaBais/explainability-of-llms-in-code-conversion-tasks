#include <fstream>
#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> split(const std::string &s, char delim) {
  std::vector<std::string> tokens;
  std::string token;
  std::istringstream iss(s);
  while (std::getline(iss, token, delim)) {
    tokens.push_back(token);
  }
  return tokens;
}

int main() {
  const std::string path = "./path/to/dir";
  auto split_path = split(path, '/');
  std::vector<std::string> folders_to_create;
  for (size_t i = 1; i < split_path.size(); ++i) {
    folders_to_create.push_back(split_path[i]);
  }

  // Check if directories exist already, and if not - create them
  std::string currentDir = "";
  for (const auto &folder : folders_to_create) {
    currentDir += folder + "/";
    if (!std::filesystem::exists(currentDir)) {
      try {
        std::filesystem::create_directory(currentDir);
      } catch (const std::exception &e) {
        std::cerr << "An Error Occured: " << &e << '\n';
        return -1; // exit with error code, you may handle this differently in
                   // your application
      }
    }
  }

  return 0;
}