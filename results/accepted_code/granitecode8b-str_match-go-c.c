#include
#include
void match(char *, char *);
int main() {
  match("abracadabra", "abr");
  return 0;
}
void match(char *first, char *second) {
 printf("1. %s starts with %s: %d
", first, second, strncmp(first, second, strlen(second)) == 0);
 int i = strstr(first, second) - first;
 printf("2. %s contains %s: %d,
", first, second, i >= 0);
 if (i >= 0) {
 printf("2.1. at location %d,
", i);
 for (int start = i+strlen(second);; start += strlen(second)+1) {
      int j = strstr(first + start, second) - (first + start);
      if (j < 0)
        break;
 printf("2.2. at location %d,
", start+j);
 }
 printf("2.2. and that's all
");
 }
 printf("3. %s ends with %s: %d
", first, second, strcmp(first+strlen(first)-strlen(second), second) == 0);
}