#include
#include
int main() {
  char c[] = "cat";
  char d[] = "dog";
  if (strcmp(c, d) == 0) {
    printf("%s is bytewise identical to %sn", c, d);
  } else {
    printf("%s is bytewise different from %sn", c, d);
  }
  if (strcmp(c, d) > 0) {
    printf("%s is lexically bytewise greater than %sn", c, d);
  } else if (strcmp(c, d) < 0) {
    printf("%s is lexically bytewise less than %sn", c, d);
  } else {
    printf("%s is lexically bytewise equal to %sn", c, d);
  }
  // A case insensitive compare can be done with a function in the strings
  // package in the Go standard library:
  char *eqf = "when interpreted as UTF-8 and compared under Unicode"
              "simple case folding rules.";
  if (strcmp(c, d) == 0) {
    printf("%s equal to %s%sn", c, d, eqf);
  } else {
    printf("%s not equal to %s%sn", c, d, eqf);
  }
  return 0;
}