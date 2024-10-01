Here's the equivalent code in JavaScript:
```
const s = "hello";
let s2;
console.log(`${s} literal`);
// or
console.log(`${s}${" literal"}`);
s2 = sconcat(s, " literal");
console.log(s2);
free(s2);
function sconcat(s1, s2) {
  return s1 + s2;
}
```
The `const` keyword is used to declare a constant variable in JavaScript, which cannot be reassigned. The `let` keyword is used to declare a variable that can be reassigned. 
The `console.log()` function is used to print the content of variables. 
In JavaScript, there is no need to declare the data type of a variable, so we don't need to use `char *` or `const char *` like in C. We can simply use `string` for string concatenation. The `sconcat()` function is also simplified to a single line using template literals.

