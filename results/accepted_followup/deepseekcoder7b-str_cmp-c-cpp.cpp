int main(int ac, char *av[]) {
  cout << "	eq  ne  gt  lt  ge  le\n";
  while (0 < (ac -= 2)) {
    const char *a = *++av, *b = *++av;
    compare(a, b);
    comparecase(a, b);
  }
  return 0; // Corrected line: removed special characters and set to a simple
            // integer value '0'
}