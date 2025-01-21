#include
#include
using namespace std;

int main() {
  char s1[5] = "abcd";
  char s2[5] = "abab";
  char s3[3] = "ab";

  // Beginning
    int start_with_ab = strncmp(s1, s3, strlen(s3))) ? 0 : 1;
    // End

    // Anywhere
    int contains_ab = strstr(s2, s3) != NULL ? 1 : 0;

    // Ends with ab
    int ends_with_ab = (strncmp(s1 + strlen(s1) - strlen(s3), s3, strlen(s3))) == 0) ? 1 : 0;

    cout << "Does '" << s1 << "' start with '" << s3 << "'? " << start_with_ab
         << endl;
    cout << "Does '" << s2 << "' contain '" << s3 << "' at any location? "
         << contains_ab << endl;
    cout << "Does '" << s1 << "' end with '" << s3 << "'? " << ends_with_ab
         << endl;

    return 0;
}