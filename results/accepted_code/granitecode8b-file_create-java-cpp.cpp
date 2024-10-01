#include
#include
using namespace std;
int main() {
  try {
    ofstream file("output.txt");
    file.close();
    ofstream root_file("/output.txt");
    root_file.close();
    mkdir("docs");
    mkdir("/docs");
  } catch (exception &e) {
    cout << e.what() << endl;
  }
  return 0;
}