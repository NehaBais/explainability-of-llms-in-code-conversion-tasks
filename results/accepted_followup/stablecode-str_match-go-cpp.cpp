#include
#include
using namespace std;
void match(string first, string second) {
  cout << "1. " << first << " starts with " << second << ": "
       << (first.compare(second) == 0 && first.find(second) == 0) << "\n";

  int i = first.find(second);
  cout << "2. " << first << " contains " << second << ": " << (i >= 0)
       << ", \n";

  if (i >= 0) {
    cout << "2.1. at location " << i << ",\n";
    int start = i + 1;
    while (true) {
   int index = first.find(second, start));
   if (index < 0) {
     break;
   }
   cout << "2.2. at location " << index << ", \n";
   start += index + 1;
    }
    cout << "2.2. and that'
         << "'s all\n";
  }

 cout << "3. " << first << " ends with " << second << ": " 
         << (first.compare(second) == 0 && first.find(second, first.length() - second.length()) >= 0)) << "\n";
}

int main() {
  match("abracadabra", "abr");
  return 0;
}