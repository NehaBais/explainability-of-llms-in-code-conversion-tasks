#include <cctype>
#include <iostream>
#include <string>

bool STREQ(const std::string &a, const std::string &b) { return a == b; }

bool STRNE(const std::string &a, const std::string &b) { return !STREQ(a, b); }

bool STRLT(const std::string &a, const std::string &b) {
  return (strcmp(a.c_str(), b.c_str()) < 0);
}

bool STRLE(const std::string &a, const std::string &b) {
  return strcmp(a.c_str(), b.c_str()) <= 0;
}

bool STRGT(const std::string &a, const std::string &b) { return STRLT(b, a); }

bool STRGE(const std::string &a, const std::string &b) { return STRLE(b, a); }

bool STRCEQ(const std::string &a, const std::string &b) {
  return (strcasecmp(a.c_str(), b.c_str()) == 0);
}

bool STRCNE(const std::string &a, const std::string &b) {
  return !STRCEQ(a, b);
}

bool STRCGT(const std::string &a, const std::string &b) {
  return strcasecmp(a.c_str(), b.c_str()) < 0;
}

bool STRCGE(const std::string &a, const std::string &b) {
  return strcasecmp(a.c_str(), b.c_str()) <= 0;
}

int main(int ac, char *av[]) {
  std::string a, b;
  puts("	eq , ne , gt , lt , ge , le");
  while (ac > 1) {
    --ac;
    b = *--av;
    a = *--av;
    if (STREQ(a, b))
      std::cout << "  " << a << " , " << STRNE(a, b) << " , " << STRGT(a, b)
                << " , " << STRLT(a, b) << " , " << STRGE(a, b) << " , "
                << STRLE(a, b) << std::endl;
    if (STRCEQ(a, b))
      std::cout << "  " << a << " , " << STRCNE(a, b) << " , " << STRCGT(a, b)
                << " , " << STRCLT(a, b) << " , " << STRCGE(a, b) << " , "
                << STRCLE(a, b) << std::endl;
  }
  return 0;
}