#include <cstdlib>
#include <functional> // Import the std::function header file
#include <iostream>
#include <string>
#include <sys/stat.h>
#include <sys/types.h>

using namespace std;

void mkdirp(const string &path, const function<void(int)> &cb) {
  struct stat sb;
  if (stat(path.c_str(), &sb) == 0 && S_ISDIR(sb.st_mode)) {
    // The directory already exists, return successfully
    cb(0);
    return;
  }

  string parent = path.substr(0, path.find_last_of('/'));
  if (parent != "" && !dirExists(parent)) {
    // Create the parent directories recursively
    mkdirp(parent, [](int er) {
      if (er == 0) {
        // The parent directory was created successfully, now create the current
        // directory
        mkdirp(path, cb);
      } else {
        // Failed to create the parent directory, return with error
        cb(er);
      }
    });
  } else {
    // Create the current directory
    int er = ::mkdir(path.c_str(), 0755);
    if (er == 0) {
      cb(0);
    } else {
      cb(er);
    }
  }
}

bool dirExists(const string &path) {
  struct stat sb;
  return stat(path.c_str(), &sb) == 0 && S_ISDIR(sb.st_mode);
}