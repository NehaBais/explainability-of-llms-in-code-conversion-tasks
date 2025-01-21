The error is due to an unexpected token ')' after concatenation operator '+'. The correct way to concatenate two string literals ('literal')) would be to enclose each literal in double quotes ("").

Here's the corrected JavaScript code:
```js
let s = "hello";
console.log(s + " literal"));

let s2 = s + " literal";
console.log(s2));
```
In this corrected code, we have properly enclosed each string literal in double quotes (""). This ensures that the concatenation operation is performed correctly and without syntax errors.
