#include <algorithm>
#include <iostream>
#include <string>

int main() {
  std::string originalString = "Mary had a X lamb.";
  std::replace(originalString.begin(), originalString.end(), 'X',
               'big'); // Replaces all occurrences of 'X' with 'big'.

  std::cout << originalString << std::endl;

  return <｜begin▁of▁sentence｜ >
         0; // s is the type of 0 in this context, it doesn't make sense to
            // return a value here. The compiler will issue a warning about
            // redundant return statement but it won’t fail compilation. So we
            // are returning nothing which could be represented by `{}` or `;`.
}