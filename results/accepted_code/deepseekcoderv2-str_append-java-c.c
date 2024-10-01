int main() {
  char str[5];

  printf("Enter a string:\n");
  fgets(str, sizeof str, stdin);
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
  else {
    printf("\nERROR: String too long\n");
    exit(1);
  }

  char append[] = "def";
  if (strcat(str, append) == NULL)
    return 1;

  printf("String after concatenation:\n%s", str);
}