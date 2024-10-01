#include <codecvt>
#include <iostream>
#include <string>

std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> converter;

int main() {
  std::u32string s = u"abc文字化けdef";
  int n = 2;
  int m = 3;

  // Print 3 characters starting at index 2 (c文字)
  std::wcout << converter.to_bytes(s.substr(n, m)) << std::endl;

  // Print all characters starting at index 2 (c文字化けdef)
  std::wcout << converter.to_bytes(s.substr(n)) << std::endl;

  // Print all characters except the last (abc文字化けde)
  std::wcout << converter.to_bytes(s.substr(0, s.length() - 1)) << std::endl;

  // Print 3 characters starting with 'b' (bc文)
  auto cpos = s.find(U'b');
  if (cpos != std::u32string::npos) {
    std::wcout << converter.to_bytes(s.substr(cpos, m)) << std::endl;
  }

  // Print 3 characters starting with "けd" (けde)
  auto spos = s.find(U'けd');
  if (spos != std::u32string::npos) {
    std::wcout << converter.to_bytes(s.substr(spos, m)) << std::endl;
  }

  return 0;
}