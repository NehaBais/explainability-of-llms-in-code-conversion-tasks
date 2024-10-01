#include <string.h>
#include <wchar.h>

int main() {
  const wchar_t *s = L"abcdefgh";
  int n = 2, m = 3;
  wchar_t char_ = L'd', chars[] = L"cd";

  // starting from n characters in and m in length;
  printf(L"%s\n", s + n - 1);

  // starting from n characters in, up to the end of the string;
  printf(L"%s\n", s + n - 1);

  // whole string minus last character;
  printf(L"%.*s\n", wcslen(s) - 1, s);

  // starting from a known character within the string and of m length;
  int idx = wcschr(s, char_) - s;
  printf(L"%.*s\n", m, s + idx);

  // starting from a known substring within the string and of m length.
  idx = wcsstr(s, chars) - s;
  printf(L"%.*s\n", m, s + idx);

  return 0;
}