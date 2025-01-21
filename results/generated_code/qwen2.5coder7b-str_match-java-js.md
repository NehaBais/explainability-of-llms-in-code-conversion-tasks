Here is how you can convert the Java code to JavaScript:

```javascript
let str1 = "abcd";
let str2 = "ab";

console.log(str1.startsWith(str2)); // returns true

console.log(str1.endsWith("zn")); // returns false

let str3 = "abab";

console.log(str3.includes(str2)); // returns true

let loc = str3.indexOf(str2); // returns 0
console.log(loc);

loc = str3.indexOf(str2, loc+1); // returns 2
console.log(loc);
```

In JavaScript, the methods `startsWith()`, `endsWith()`, and `includes()` are used to check if a string starts with another string, ends with another string, or contains another string respectively. The method `indexOf()` is used to find the first occurrence of a substring in a string, and it also allows you to specify from which index to start searching (second parameter).

These methods do not throw an exception for invalid indices unlike the Java methods, so be cautious when using them with incorrect parameters.
