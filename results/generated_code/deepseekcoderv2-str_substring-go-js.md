### Solution:
```javascript
function main() {
    const string = 'ABCDEFGH';
  
    // starting from n characters in and of m length
    console.log('Start 2, length 3:', string.slice(2, 5));
    
    // starting from n characters in, up to the end of the string
    console.log('Start 2, to end:', string.slice(2));
  
    // whole string minus last character
    console.log('All but last:', string.slice(0, -1));
    
    // starting from a known character within the string and of m length
    const idx = string.indexOf('D');
    console.log(`Start 'D', length 3:`, string.slice(idx, idx + 3));
  
    // starting from a known substring within the string and of m length
    const substrIndex = string.indexOf('DE');
    console.log('Start "DE", length 3:', string.slice(substrIndex, substrIndex + 3));
}

main();
```
### Description:
The problem is to convert a given Go program that calculates and displays substrings of a string using the slice operator in Golang into an equivalent JavaScript code. The original code uses UTF-8 encoding for characters within strings.

The main challenge lies in converting between different encodings, such as ASCII (for 8-bit) or UTF-16 (for UTF-16), and understanding how substrings are calculated using the slice operator. In Go, a string is represented as an array of runes (Unicode code points) encoded as bytes in UTF-8 encoding, while in JavaScript, strings are sequences of Unicode characters represented by 16-bit integers in UTF-16 encoding.

The provided solution aims to convert this functionality into JavaScript, which also uses UTF-16 for strings. The key challenge is converting the slice operation (s[n : n+m]) correctly based on byte indices rather than character indices. This requires handling surrogate pairs and non-BMP characters in both languages.

The conversion from Go to JavaScript involves understanding how substrings are calculated, converting between different encodings like ASCII/UTF-8 and UTF-16, managing surrogate pairs for non-BMP characters, and ensuring the correct interpretation of code points as logical Unicode characters rather than byte indices. The solution presented is one possible way to accomplish this conversion while maintaining compatibility with both languages' character representations.

