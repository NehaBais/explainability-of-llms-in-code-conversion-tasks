Below is the JavaScript code equivalent to the Python code:

```JavaScript
let str = "abcd";
console.log(str.startsWith("ab")); // True
console.log(str.endsWith("zn")); // False
console.log(str.includes("bb"));  // False
console.log(str.includes("ab"));  // True
console.log(str.indexOf("bb"));   // -1
console.log(str.indexOf("ab"));   // 0
console.log(str.indexOf("ab", str.indexOf("ab") + 1));  // 2
```

Note: The JavaScript `includes()` method is not exactly the same as Python's `in` operator. In JavaScript, the `in` operator checks if a string is a substring of another string, not just if two strings are equal.
