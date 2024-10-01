Sure, here's the equivalent JavaScript code for the given C code snippet:
```javascript
let str = "my String";
const cstr = "Changed ";
const dup = str.split("").reverse().join("");
const newStr = `${cstr}${dup}`;
console.log(newStr);
```
Explanation:
- The first line declares a string variable `str` and assigns it the value `"my String"`.
- The second line declares a constant string variable `cstr` and assigns it the value `"Changed "`.
- The third line duplicates the contents of `str` using the `split()`, `reverse()`, and `join()` methods. The `split()` method splits the string into an array of characters, the `reverse()` method reverses the order of the elements in the array, and the `join()` method joins the elements back together into a new string. The resulting string is stored in the variable `dup`.
- The fourth line creates a new string variable `newStr` by concatenating `cstr` and `dup` using the template literal syntax.
- Finally, the `console.log()` function is used to print the value of `newStr` to the console.

