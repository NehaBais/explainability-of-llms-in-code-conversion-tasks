#include
#include
#include
#include
using namespace std;
int mkdirp(const string &path) {
  char *p = const_cast(path.c_str());
  char *dir = dirname(p);
  if (mkdir(dir, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) == -1 &&
      errno != EEXIST) {
    cout << "Failed to create directory" << endl;
  } else {
    cout << "Directory created successfully" << endl;
  }
}
int main() {
  mkdirp("./path/to/dir");
  return 0;
}