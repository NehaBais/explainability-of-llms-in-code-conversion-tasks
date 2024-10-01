```javascript
// 1. Determining if the first string starts with the second string
const startsWith = (str, prefix) => str.startsWith(prefix);

console.log(startsWith("abcd", "ab")); // true

// 2. Determining if the first string contains the second string at any location
const contains = (str, substr) => str.includes(substr);

console.log(contains("abcd", "zn")); // false
console.log(contains("abab", "bb")); // false
console.log(contains("abab", "ab")); // true

// 3. Determining if the first string ends with the second string
const endsWith = (str, suffix) => str.endsWith(suffix);

console.log(endsWith("abcd", "zn")); // false
console.log(endsWith("abcd", "cd")); // true

// Optional 1. Print the location of the match for part 2
const indexOf = (str, substr) => str.indexOf(substr);

console.log(indexOf("abab", "bb")); // -1
console.log(indexOf("abab", "ab")); // 0
console.log(indexOf("abab", "ab", 1)); // 2

// Optional 2. Handle multiple occurrences of a string for part 2
const lastIndexOf = (str, substr) => str.lastIndexOf(substr);

console.log(lastIndexOf("abab", "ab")); // 2
```


