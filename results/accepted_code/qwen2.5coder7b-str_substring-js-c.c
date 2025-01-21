#include <stdio.h>
#include <wchar.h>

int main() {
  wchar_t str[] = L"abcdefgh";
  int n = 2;
  int m = 3;

  // starting from n characters in and of m length
  wprintf(L"%ls\n", str + n);

  // starting from n characters in, up to the end of the string
  wprintf(L"%ls\n", str + n);

  // whole string minus last character
  str[wcslen(str) - 1] = L'\0';
  wprintf(L"%ls\n", str);

  // start from a known character within the string and of m length
  wchar_t *pos = wcsstr(str, L"b");
  if (pos != NULL) {
    pos += n;
    wprintf(L"%ls\n", pos);
  } else {
    printf("Character not found in string.\n");
  }

  // start from a known substring within the string and of m length
  pos = wcsstr(str, L"bc");
  if (pos != NULL) {
    pos += n;
    wprintf(L"%ls\n", pos);
  } else {
    printf("Substring not found in string.\n");
  }

  return 0;
}