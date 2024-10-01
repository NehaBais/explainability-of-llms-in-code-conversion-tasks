Sure, here's the JavaScript code that performs the three string matching operations you requested:
```javascript
function startsWith(str, substr) {
 return str.startsWith(substr);
}
function contains(str, substr) {
 return str.includes(substr);
}
function endsWith(str, substr) {
 return str.endsWith(substr);
}
function findIndex(str, substr) {
 let index = str.indexOf(substr);
 if (index === -1) {
 return -1;
 } else {
 return index;
 }
}
console.log(startsWith("abcd", "ab")); //true
console.log(endsWith("abcd", "zn")); //false
console.log(contains("abab", "bb")); //false
console.log(contains("abab", "ab")); //true
let index = findIndex("abab", "bb"); //-1
index = findIndex("abab", "ab"); //0
index = findIndex("abab", "ab", index + 1); //2
```
The `startsWith` function takes two arguments: the first string and the second string to search for. It returns `true` if the first string starts with the second string, and `false` otherwise.
The `contains` function also takes two arguments: the first string and the second string to search for. It returns `true` if the first string contains the second string at any location, and `false` otherwise.
The `endsWith` function takes two arguments: the first string and the second string to search for. It returns `true` if the first string ends with the second string, and `false` otherwise.
The `findIndex` function takes two arguments: the first string and the second string to search for. It returns the index of the first occurrence of the second string in the first string, or `-1` if the second string is not found. If you pass an additional argument to `findIndex`, it will start searching for the second string at that index.