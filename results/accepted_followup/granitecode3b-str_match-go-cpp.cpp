#include
using namespace std;
int main() {
  string first = "abracadabra";
  string second = "abr";

  cout << "1. " << first << " starts with " << second << ": "
       << (first.find(second) == 0) << endl;

  int i = first.find(second);
  cout << "2. " << first << " contains " << second << ": "
       << (i != string::npos) << ", ";
  if (i != string::npos) {
    cout << "at location " << i << ", ";
    for (int start = i + 1;;) {
      int j = first.find(second, start);
      if (j == -1)
        break;
      cout << "at location " << j << ", ";
      start = j + 2;
    }
  }
  cout << endl;

  cout << "3. " << first << " ends with " << second << ": "
       << (first.rfind(second) != string::npos) << endl;
}