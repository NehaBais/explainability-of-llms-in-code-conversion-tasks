Here's the JavaScript code that demonstrates the three types of string matching you described:
```
let s1 = "abcd";
let s2 = "abab";
let s3 = "ab";
// Beginning
console.log(s1.startsWith(s3)); // true
// End
console.log(s1.endsWith(s3)); // false
// Anywhere
console.log(s1.includes(s2)); // false
console.log(s1.indexOf(s3)); // 0
let loc = s1.indexOf(s3);
loc = s1.indexOf(s3, loc + 1);
console.log(`Location of "${s3}" in "${s1}": ${loc}`); // Location of "ab" in "abcd": 2
```
The `startsWith()` and `endsWith()` methods check if the string starts or ends with the specified substring, respectively. The `includes()` method checks if the string contains the specified substring at any location. The `indexOf()` method returns the index of the first occurrence of the specified substring in the string, or -1 if it is not found. You can pass an optional second argument to `indexOf()` to specify the starting index for the search.

