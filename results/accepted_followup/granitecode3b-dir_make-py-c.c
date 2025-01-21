#include
#include
#include
int mkdirp(const char *path) {
  struct stat st;
  if (stat(path, &st) != 0) {
    mkdir(path, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
  }
  return 0;
}
int main() {
  mkdirp("./path/to/dir");
  return 0;
}