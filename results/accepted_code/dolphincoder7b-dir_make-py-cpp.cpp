#include <cstdlib> // for access(), mkdir()
#include <cstring>
#include <string>
#include <sys/stat.h> // for creating directories
#include <unistd.h>   // for create() system call

bool mkpath(std::string const &s) {
  size_t pos = s.find_last_of('/');
  if (pos == std::string::npos)
    return false;

  // create parent directory
  std::string path = s.substr(0, pos);
  if (!mkpath(path))
    return false;

  // create current directory
  int rc = mkdir(s.c_str(), S_IRWXU | S_IRWXG | S_IROTH);
  if (rc == -1) {
    perror("mkdir");
    exit(EXIT_FAILURE);
  }
  return true;
}