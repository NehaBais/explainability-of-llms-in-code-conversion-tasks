#include <fcntl.h>
#include <fstream>
#include <iostream>
#include <string>
#include <sys/stat.h>
#include <unistd.h>
#include <vector>

std::vector<std::string> split(const std::string &s, char delim) {
  std::vector<std::string> tokens;
  std::string token;
  std::istringstream tokenStream(s);
  while (std::getline(tokenStream, token, delim)) {
    tokens.push_back(token);
  }
  return tokens;
}

void mkdirp(const std::string &p) {
  if (access(p.c_str(), F_OK) == 0) { // if file/directory exists
    return;
  } else { // else
    std::vector<std::string> dirs = split(p, '/');
    for (const std::string &dir : dirs) {
      if (dir.empty())
        continue; // ignore empty string
      if (access(dir.c_str(), F_OK) == -1) {
        std::cout << "mkdirp " << dir << std::endl;
        if (mkdir(dir.c_str(), 0777) < 0) {
          throw std::runtime_error(
              "Unable to create directory\n"); // handle error here
        }
      }
    }
  }
}