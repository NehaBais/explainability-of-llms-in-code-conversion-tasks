Here is the equivalent JavaScript code for your C program. This piece of Javascript will create a string variable with any text value, and then prepend it with another string literal.

```javascript
let str = "my String";
const cstr="Changed ";
const dup = str;  // we use 'dup' to store the original string, just in case if needed later.
str = cstr + dup;  
console.log(str);
```
In JavaScript, we don’t need to manually deallocate memory like C/C++, so there is no `free` function equivalent in JavaScript. However, the variable holding the original string can still be used if needed later on.

