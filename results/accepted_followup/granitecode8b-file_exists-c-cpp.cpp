#include
#include
#include
#include
using namespace std;
/* Check for regular file. */
bool check_reg(const string &path) {
  struct stat sb;
  return stat(path.c_str(), &sb) == 0 && S_ISREG(sb.st_mode);
}
/* Check for directory. */
bool check_dir(const string &path) {
  struct stat sb;
  return stat(path.c_str(), &sb) == 0 && S_ISDIR(sb.st_mode);
}
int main() {
  string cwd = getcwd(nullptr, 0);
  if (check_reg("input.txt") && check_dir("docs")) {
    cout << "Input.txt is a regular file and docs is a directory in the "
            "current working directory."
         << endl;
  } else {
    cout << "One or both of input.txt and docs are not found in the current "
            "working directory."
         << endl;
  }
}