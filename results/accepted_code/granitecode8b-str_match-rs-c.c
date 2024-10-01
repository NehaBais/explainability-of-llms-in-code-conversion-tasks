#include
#include
void print_match(int *possible_match) {
  if (*possible_match != -1) {
 printf("Found match at pos %d
", *possible_match);
  } else {
 printf("Did not find any matches
");
  }
}
int main() {
  char s1[] = "abcd";
  char s2[] = "abab";
  char s3[] = "ab";

  // Determining if the first string starts with second string
  int result = !strcmp(s1, strstr(s1, s3));
 printf("First string starts with second string: %d
", result);
 
 // Determining if the first string contains the second string at any location
 char* found_match = strstr(s1, s3);
 result = (found_match != NULL);
 printf("First string contains second string at any location: %d
", result);
 print_match((int*) found_match);
 
 // Determining if the first string ends with the second string
 result = !strcmp(&s2[strlen(s2) - strlen(s3)], s3);
 printf("First string ends with second string: %d
", result);
 
 return 0;
}