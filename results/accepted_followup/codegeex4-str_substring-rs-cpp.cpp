#include <iostream>
#include <unicode/unistr.h> // Include for Unicode functions

int main() {
  UText us;
  auto status =
      utextFromString(&us, reinterpret_cast<const UChar *>("abc123"), -1, NULL);
  if (status != U_ZERO_ERROR) {
    std::cerr << "Failed to create UText from string" << std::endl;
    return 1;
  }

  auto cpos = utextFindFirst(&us, static_cast<UChar32>('b'), &us);
  auto spos =
      utextFindFirst(&us, static_cast<UChar32>(0x3043), &us); // 'け' in Unicode

  if (cpos != -1) {
    std::cout << "Found character at position: " << cpos << std::endl;
  }

  return 0;
}