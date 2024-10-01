#include
#include
using namespace std;
int main() {
  struct stat info;
  if (stat("input.txt", &info) == 0) {
    cout << "Size of input.txt: " << info.st_size << endl;
  } else {
    cout << "Error accessing input.txt" << endl;
  }
  if (stat("/input.txt", &info) == 0) {
    cout << "Size of /input.txt: " << info.st_size << endl;
  } else {
    cout << "Error accessing /input.txt" << endl;
  }
  return 0;
}