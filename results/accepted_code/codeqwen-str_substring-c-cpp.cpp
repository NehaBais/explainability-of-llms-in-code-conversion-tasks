#include <cctype>
#include <codecvt>
#include <iostream>
#include <locale>
#include <string>

class MyClass {
public:
  std::wstring substring(const std::wstring &s, size_t n, ptrdiff_t m) {
    if (n >= s.size())
      return L"";
    if (m <= 0)
      m = s.size() - n + 1;

    for (; n > 0; ++n, ++s)
      if (*s ==
          L' ') // Assuming the character to skip is a space in UTF-16 context
        return L"";

    std::wstring result(m + 1, L'\0');
    result = s.substr(0, m);
    return result;
  }

  std::wstring str_wholeless1(const std::wstring &s) {
    return substring(s, 0, s.size() - 1);
  }

  std::wstring str_fromch(const std::wstring &s, int ch, ptrdiff_t m) {
    auto it = std::find(s.begin(), s.end(), static_cast<wchar_t>(ch));
    return substring(s, std::distance(s.begin(), It), m);
  }

  std::wstring str_fromstr(const std::wstring &s, const std::wstring &in,
                           ptrdiff_t m) {
    auto It = s.find(in);
    return substring(s, std::distance(s.begin(), It), m);
  }

  void test() {
    std::wstring s = L"hello world shortest program";

    std::wcout << substring(s, 12, 5) << std::endl; // get "short"
    std::wcout << substring(s, 6, -1)
               << std::endl; // get "world shortest program"
    std::wcout << str_wholeless1(s) << std::endl;        // "... progra"
    std::wcout << str_fromch(s, L'w', 5) << std::endl;   // "world"
    std::wcout << str_fromstr(s, L"ro", 3) << std::endl; // "rog"
  }

private:
  static std::locale loc(""); // Create a locale for UTF-16 conversion

  static std::wstring ToWString(const std::string &str) {
    std::wstring_convert<std::codecvt_utf8<wchar_t>, wchar_t> converter;
    return converter.from_bytes(str);
  }

  static std::string FromWString(const std::wstring &ws) {
    std::wstring_convert<std::codecvt_utf8<wchar_t>, wchar_t> converter;
    return converter.to_bytes(ws);
  }
};

int main() {
  MyClass obj;
  obj.test();
  return 0;
}