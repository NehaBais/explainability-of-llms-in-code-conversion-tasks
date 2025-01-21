int main() {
  string s = "abcdefgh";
  int n, m;
  char char, chars;
  cin >> n >> m >> char >> chars;
  cout << s.substr(n - 1, m) << endl;
  cout << s.substr(0, s.size() - 1) << endl;
  int indx = s.find(char);
  cout << s.substr(indx, m) << endl;
}