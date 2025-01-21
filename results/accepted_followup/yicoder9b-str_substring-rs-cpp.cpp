#include <codecvt>
#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main() {
  // Converter from wstring to string
  wstring_convert<codecvt_utf8<wchar_t>, wchar_t> converter;

  wstring s =
      L"some wide char string"; // Use wide character literal for wide string.
  wchar_t ch = L'o';            // Use wide character literal for wide char.

  size_t spos = s.find(ch);
  size_t m = converter.to_bytes(s)
                 .substr(converter.to_bytes(s).find('o'))
                 .size(); // Convert wstring to string before using with substr
                          // function.

  wstring subStr;
  if (spos !=
      std::wstring::npos) { // Check if character is found in the string.
    subStr = s.substr(
        spos,
        m); // Use substr to get the sub-string from original wide char string.
  }

  cout << "Original wide char string: " << converter.to_bytes(s)
       << endl; // Convert wstring to string before outputting it.
  cout << "Substring starting from first '" << ch
       << "': " << converter.to_bytes(subStr)
       << endl; // Convert wstring to string before outputting it.
}