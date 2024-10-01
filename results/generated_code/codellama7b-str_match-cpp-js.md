```scss
// C++ to JavaScript conversion

let s1 = "abcd";
let s2 = "abab";
let s3 = "ab";

// Beginning
console.log(s1.startsWith(s3)); // true

// End
console.log(s1.endsWith(s3)); // false

// Anywhere
console.log(s2.indexOf(s3)); // 0
let loc = s2.indexOf(s3, loc + 1); // 2
```
