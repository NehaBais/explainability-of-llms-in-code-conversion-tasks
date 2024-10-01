#include
#include
using namespace std;
int main() {
  struct stat foo;
  stat("input.txt", &foo);
  cout << foo.st_size << endl;
  stat("/input.txt", &foo);
  cout << foo.st_size << endl;
  return 0;
}