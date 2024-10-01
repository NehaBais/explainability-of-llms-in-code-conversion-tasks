#include
#include
#include
using namespace std;
void printFileSize(string f) {
  ifstream file(f);
  if (!file.is_open()) {
    cout << "Error: Unable to open file" << endl;
  } else {
    file.seekg(0, file.end);
    int size = file.tellg();
    file.close();
    cout << "File size is: " << size << " bytes" << endl;
  }
}
int main() {
  printFileSize("input.txt");
  printFileSize("/input.txt");
  return 0;
}