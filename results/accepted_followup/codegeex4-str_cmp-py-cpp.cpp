void compare(const std::string &a, const std::string &b) {
  // ... same as before ...
}
void compare(const char *a, const char *b) {
  // ... same as before ...
}

int main() {
  compare("YUP", "YUP");
  compare("BALL", "BELL");
  compare("24", "123");

  std::string str1 = "5.0";
  std::string str2 = "5";

  compare(str1, str2);

  return 0;
}