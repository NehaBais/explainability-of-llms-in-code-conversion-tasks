#include
#include
int main() {
  std::string s = "abcdefgh";
  int n = 2, m = 3;
  char char = 'd';
  char chars[] = "cd";
  // starting from n=2 characters in and m=3 in length;
  std::cout << s.substr(n - 1, m) << std::endl;
  // starting from n characters in, up to the end of the string;
  std::cout << s.substr(n - 1) << std::endl;
  // whole string except last character
  std::cout << s.substr(0, s.length() - 1) << std::endl;
  int indx = s.find(char);
  std::cout << s.substr(indx, m) << std::endl;
  indx = s.find(chars);
  std::cout << s.substr(indx, m) << std::endl;
  return 0;
}