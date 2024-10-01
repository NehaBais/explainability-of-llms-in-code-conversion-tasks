#include <cstdlib> // for the exit function
#include <errno.h> // errno
#include <fcntl.h> // O_* defines (O_RDONLY, etc.)
#include <iostream>
#include <string.h>   // strerror()
#include <sys/stat.h> // stat struct and constants for mode_t (octal 0777)
#include <unistd.h>   // getcwd, chdir
using namespace std;

void usage(const char *progname);
int main(int argc, const char **argv) {
  if (argc > 1) {
    int err = 0;
    auto getpath = [&](char *buf, size_t buflen, bool dir) {
      return chdir(argv[1]) == 0 ? ::getcwd(buf, buflen)
                                 : err = errno; // the & is not necessary if you
                                                // use a lambda with C++20
    };

    char path[PATH_MAX];
    if (!getpath(path, sizeof(path), true)) {
      struct stat sb = {};
      int fd = open(argv[1], O_RDONLY);
      err = fstat(fd, &sb) != 0 ? errno : 0; // need to call fstat because the
                                             // file has already been opened
      if (err == 0 && S_ISREG(sb.st_mode)) {
        cout << "Size of " << argv[1] << " is: " << sb.st_size << "\n";
      } else
        err = -2; // invalid file type or stat failed
    }

    if (err)
      cerr << "Error opening '" << argv[1] << "'"
           << (err == -2 ? " (Invalid File Type)" : "") << endl;
  }
}