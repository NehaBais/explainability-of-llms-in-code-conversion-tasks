int main() {
  char s1[MAX_LENGTH];
  char s2[MAX_LENGTH];

  // Declare s3 inside the loop to resolve the error
  char s3[MAX_LENGTH] = "ab";

  strcpy(s1, "abcd");
  strcpy(s2, "abab");
  // ...
}