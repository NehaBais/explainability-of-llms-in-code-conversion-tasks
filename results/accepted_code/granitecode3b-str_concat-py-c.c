#include
int main() {
  char s1[] = "hello";
  printf("%s %s\n", s1, "world");

  // Concatenate s1 and a string literal
  char s2[strlen(s1) + 6];
  sprintf(s2, "%s world", s1);
  printf("%s\n", s2);

  // Use the join function to concatenate an array of strings
  char *arr[] = {"hello", "world", "mom"};
  char *s3 = ", ".join(arr, 3);
  printf("%s\n", s3);

  return 0;
}