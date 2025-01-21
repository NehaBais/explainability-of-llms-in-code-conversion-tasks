#include
#include
using namespace std;

void printFileSize(string f) {
  struct stat st;
  if (stat(f.c_str(), &st) == -1) {
    perror("Error");
  } else {
    cout << st.st_size << endl;
  }
}

int main() {
  printFileSize("input.txt");
  printFileSize("/input.txt");
  return 0;
}