#include
#include

void sconcat(const std::string &s1, const std::string &s2) {
  std::string s0 = new char[strlen(s1.c_str()) + strlen(s2.c_str()) + 1];
  strcpy(static_cast<char*>(const_cast<void*>(s0))))), s1.c_str());
  strcat(static_cast<char*>(const_cast<void*>(s0))))), s2.c_str()));
  delete[] static_cast<char*>(const_cast<void*>(s0)))));
}

int main() {
  std::string s = "hello";
  std::string s2;

  std::cout << "\"" << s << "\" literal\n";
  /* or */
  std::cout << "\"" << s << " \" literal\n";

  sconcat(s, std::string(" literal"));
  puts(s.c_str());
}