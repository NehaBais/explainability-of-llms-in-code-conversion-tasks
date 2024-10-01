 The JavaScript language does not have direct equivalents for the strcmp and strcasecmp functions in C. However, we can use the methods provided by String object to get similar results. Here is how you can achieve comparisons in JavaScript:

```javascript
function STREQ(a, b) {
  return a === b;
}

function STRNE(a, b) {
  return !STREQ(a, b);
}

function STRLT(a, b) {
  return a < b;
}

function STRGT(a, b) {
  return a > b;
}

function STREQCaseSensitive(a, b) {
  return a === b;
}

function STREQCaseInsensitive(a, b) {
  return a.toLowerCase() === b.toLowerCase();
}
```
6. How the language handles comparison of numeric strings if these are not treated lexically

JavaScript will handle comparing two numbers in string form correctly as long as they are purely numeric. If there is any non-numeric character, it will treat them differently and might return incorrect results. 

Here's an example:

console.log("12" < "2"); // true
console.log("apple" < "orange"); // false - It compares string lexicographically
