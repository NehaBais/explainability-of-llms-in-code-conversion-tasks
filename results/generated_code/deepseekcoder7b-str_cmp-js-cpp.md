The following code is the equivalent C++ code for your JavaScript demonstration. I have used `std::string` as a string data type, and overloaded comparison operators from `<string>` library to perform these comparisons. For case-insensitive lexical ordering, we use the 'std::lexicographical_compare' function with custom comparison function that converts each character into lowercase for comparison:

```c++
#include <iostream>
#include <string>
#include <algorithm> //for std::lexicographical_compare
#include <cctype>     //for tolower() 

//Case insensitive char comparison function
bool compareChars(char a, char b) {
    return tolower((unsigned char)a) < tolower((unsigned char)b);
}

int main() {
   std::string str1 = "abcd";
   std::string str2 = "ABCD";

   // Comparing exact equality
   if(str1 == str1){ 
      std::cout << "Strings are equal" << '\n'; }
      
   // Inverse of exact equality
   if (str1 != str2) { 
      std::cout << "Strings are not equal" << '\n'; }
   
   // Lexically ordered before
   if (str1 < str2) {
      std::cout << "String 1 is lexically ordered before string 2" << '\n'; }
      
   //Lexically ordered after
   if(str2 > str1){
      std::cout << "String 2 is lexically ordered after string 1" << '\n'; }
   
   // Case insensitive exact equality
   std::string lowerStr1 = str1;
   std::transform(lowerStr1.begin(), lowerStr1.end(), lowerStr1.begin(), ::tolower);
      
   if (lowerStr1 == "abcd"){ 
      std::cout << "Case insensitive strings are equal" << '\n'; }
   
   // Lexically ordered before case sensitive and vice versa
   if(std::lexicographical_compare(str1.begin(), str1.end(), str2.begin(), str2.end(), compareChars)){
      std::cout << "Case insensitive string 1 is lexically ordered before string 2" << '\n'; }
   
   if(!std::lexicographical_compare(str2.begin(), str2.end(), str1.begin(), str1.end(), compareChars)){
      std::cout << "Case insensitive string 2 is lexically ordered after string 1" << '\n'; }
      
   return 0;
}
```
The code compares two strings for exact equality, inequality, and lexical ordering. It also demonstrates how to achieve case-insensitive comparisons by converting all the characters in a string into lowercase before comparison using `std::transform` function with ::tolower as comparison function. This is achieved using custom char compare function 'compareChars'.

