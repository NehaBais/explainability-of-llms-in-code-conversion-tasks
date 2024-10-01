Sure! Here's the JavaScript code that performs the same three types of string matching as the C++ code:
```javascript
let s1 = "abcd";
let s2 = "abab";
let s3 = "ab";
// Beginning
console.log(s1.startsWith(s3)); // true
// End
console.log(s1.endsWith(s3)); // false
// Anywhere
console.log(s1.includes(s2)); // true
```
In this JavaScript code, we use the `startsWith()`, `endsWith()`, and `includes()` methods to perform the three types of string matching as described in the C++ code. The `startsWith()` method checks if the first string starts with the second string, the `endsWith()` method checks if the first string ends with the second string, and the `includes()` method checks if the first string contains the second string at any location.
Note that the JavaScript `includes()` method is used instead of the C++ `find()` method because it returns a boolean value indicating whether the search string is found in the first string, without returning the index of the match. If you need to find all occurrences of a string, you can use the `match()` method or regular expressions.

