#include <iostream>
#include <string>

using namespace std;

class DirMaker {
public:
  static bool mkdir(const string &path) {
    // check if path exists
    if (exists(path)) {
      return true;
    }

    size_t lastPos = 0;
    for (size_t pos = 0; pos < path.length(); ++pos) {
      char c = path[pos];
      if (c == '/') {
        string dirName = path.substr(lastPos, pos - lastPos);
        DirMaker maker;
        if (!maker.mkdir(dirName)) {
          return false;
        }
        lastPos = pos + 1;
      }
    }

    // create final dir
    string dirName = path.substr(lastPos, path.length() - lastPos);
    DirMaker maker;
    if (!maker.mkdir(dirName)) {
      return false;
    }
  }
};

int main() { cout << "Hello World!" << endl; }