#include
#include
using namespace std;
void match(string first, string second) {
  cout << "1. " << first << " starts with " << second << ": "
       << (first.rfind(second, 0) == 0) << endl;
  size_t i = first.find(second);
  cout << "2. " << first << " contains " << second << ": "
       << (i != string::npos) << ", ";
  if (i != string::npos) {
    cout << "at location " << i << ", ";
    for (size_t start = i + 1;;) {
      if ((i = first.find(second, start)) == string::npos)
        break;
      cout << "at location " << start + i << ", ";
      start += i + 1;
    }
    cout << "and that's all" << endl;
  }
  cout << "3. " << first << " ends with " << second << ": "
       << (first.find_last_of(second) == first.size() - second.size()) << endl;
}
int main() {
  match("abracadabra", "abr");
  return 0;
}