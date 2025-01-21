void compare(const std::string &A, const std::string &B) {
  std::cout << A << "  " << STREQ(A, B) << ", " << STRNE(A, B) << ", "
            << STRGT(A, B) << ", " << STRLT(A, B) << ", " << STRGE(A, B) << ", "
            << STRLE(A, B) << std::endl;
}

int main() {
  std::string A, B;
  puts("	eq , ne , gt , lt , ge , le");
  while (std::cin >> A >> B) {
    compare(A, B);
  }
  return 0;
}