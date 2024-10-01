```c
#include <string.h>
#include <wchar.h>

int main() {
    const wchar_t* s = L"abc文字化けdef";
    size_t n = 2;
    size_t m = 3;

    // Print 3 characters starting at index 2 (c文字)
    wprintf(L"%.*ls\n", m, s + n);

    // Print all characters starting at index 2 (c文字化けdef)
    wprintf(L"%.*ls\n", wcslen(s) - n, s + n);

    // Print all characters except the last (abc文字化けde)
    wprintf(L"%.*ls\n", wcslen(s) - 1, s);

    // Print 3 characters starting with 'b' (bc文)
    size_t cpos = wcsstr(s, L"b") - s;
    wprintf(L"%.*ls\n", m, s + cpos);

    // Print 3 characters starting with "けd" (けde)
    size_t spos = wcsstr(s, L"けd") - s;
    wprintf(L"%.*ls\n", m, s + spos);

    return 0;
}
```
