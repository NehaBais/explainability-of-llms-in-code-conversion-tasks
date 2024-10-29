#include <stdio.h>
#include <string.h>
#include <wchar.h>

int main() {
  wchar_t s[] = L"0123456789";

  int const n = 3;
  int const m = 4;
  wchar_t const c = L'2';
  wchar_t const sub[] = L"456";

  // C doesn't provide a built-in method for getting substrings, so we have to
  // write our own. This function gets the start index and length of the string
  // to return it as a substring
  wprintf(L"%.*ls\n", m, s + n);

  // Substring from nth character till end
  wprintf(L"%ls\n", s + n);

  // Excluding last character
  wprintf(L"%.*ls\n", strlen((char *)s) - 1, s);

  // Starting from a known char and of m length
  wprintf(L"%.*ls\n", m, s + (wcschr(s, c) - s));

  // Substring starting from a known substring within the string and of m
  // length. This assumes that the substring you are looking for is not
  // overlapping with the main string
  wprintf(L"%.*ls\n", m, wcsstr(s, sub) + (wcsstr(s, sub) - s));

  return 0;
}