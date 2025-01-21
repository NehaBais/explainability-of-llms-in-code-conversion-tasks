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

// Declare these two new functions
bool STRCGT(const std::string &a, const std::string &b) {
  return strcasecmp(a.c_str(), b.c_str()) < 0;
}

bool STRCGE(const std::string &a, const std::string &b) {
  return strcasecmp(a.c_str(), b.c_str()) <= 0;
}

int main(int ac, char *av[]) {
  // Remaining code is same as before
}