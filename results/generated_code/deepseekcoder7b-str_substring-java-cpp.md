The C++ code for the above Java methods can be written as follows to support Unicode strings in UTF-8 or UTF-16 encoding:

Please note that this is a simple demonstration and does not handle edge cases, such as if `str` doesn't have enough characters starting from a known character/substring. You may need to enhance error handling according to your application requirements.

```c++
#include <iostream>
#include <string>

// Starting from n characters in and of m length;
std::u32string Substring(const std::u32string& str, int n, int m){
    return str.substr(n, m);
}

// Starting from n characters in, up to the end of the string;
std::u32string Substring(const std::u32string& str, int n){
    return str.substr(n);
}

// Whole string minus the last character;
std::u32string Substring(const std::u32string& str){
    return str.substr(0, str.length()-1);
}

// Starting from a known character within the string and of m length;
std::u32string Substring(const std::u32string& str, char32_t c, int m){
    size_t pos = str.find(c);
    if (pos == std::u32string::npos) {
        // Handle not found case here or throw an exception
		// For now returning the original string
        return str;
    } else{
      	return str.substr(pos, m+1); 
	}  
}

// Starting from a known substring within the string and of m length;
std::u32string Substring(const std::u32string& str, const std::u32string& sub, int m){
    size_t pos = str.find(sub);
    if (pos == std::u32string<｜begin▁of▁sentence｜>::npos) {
        // Handle not found case here or throw an exception
		// For now returning the original string
       return str; 
	} else{
     	return str.substr(pos, m+sub.length());  
	}   
}
```
This code utilizes `std::u32string` for Unicode support as it uses UTF-32 encoding to represent the strings in C++ and supports any valid Unicode code point, including those in the Basic Multilingual Plane or above. It converts 8-bit characters (ASCII) into their equivalent UTF-32 representations while preserving the semantics of the original ASCII data.

