#include
#include
#include
using namespace std;
int main() {
  string str = "abcdefgh";
  int n = 2, m = 3;
  //  *  starting from n characters in and of m length;
  string substr_1 = str.substr(n, m); // => "cde"
  cout << substr_1 << endl;
  //  *  starting from n characters
  string substr_2 = str.substr(n); // => "defgh"
  cout << substr_2 << endl;
  //  *  all but the last character
  string substr_3 = str.substr(0, str.length() - 1); // => "abcde"
  cout << substr_3 << endl;
  //  *  from the index of the character 'c'
  int index = str.find("c");
  string substr_4 = str.substr(index, m); // => "cdefgh"
  cout << substr_4 << endl;
  //  *  from the index of the character 'c', all but the last character
  string substr_5 = str.substr(index, str.length() - index - 1); // => "defgh"
  cout << substr_5 << endl;
  return 0;
}