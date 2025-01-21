#include
#include
int main() {
  char c[] = "cat";
  char d[] = "dog";
  if (strcmp(c, d) == 0) {
    printf("%s is bytewise identical to %s", c, d);
  }
  if (strcmp(c, d) != 0) {
    printf("%s is bytewise different from %s", c, d);
  }
  if (strcmp(c, d) > 0) {
    printf("%s is lexically bytewise greater than %s", c, d);
  }
  if (strcmp(c, d) < 0) {
    printf("%s is lexically bytewise less than %s", c, d);
  }
  if (strcmp(c, d) >= 0) {
    printf("%s is lexically bytewise greater than or equal to %s", c, d);
  }
  if (strcmp(c, d) <= 0) {
    printf("%s is lexically bytewise less than or equal to %s", c, d);
  }
  const char *eqf = "when interpreted as UTF-8 and compared under Unicode "
                    "simple case folding rules.";
  if (strcasecmp(c, d) == 0) {
    printf("%s equal to %s %s", c, d, eqf);
  } else {
    printf("%s not equal to %s %s", c, d, eqf);
  }
}