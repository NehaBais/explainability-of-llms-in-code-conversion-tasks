Here's the converted code from C++ to JavaScript that performs string interpolation:
```javascript
let original = 'Mary had a X lamb.';
let toBeReplaced = 'X';
let replacement = 'little';
let newString = original.replace(toBeReplaced, replacement);
console.log('String after replacement:', newString);
```
The `string.replace()` method is used to replace the substring in the original string with the specified replacement string. In this case, we're replacing the value of `toBeReplaced` (which is "X") with the value of `replacement` (which is "little"). The resulting string is stored in the `newString` variable, which is then printed to the console using `console.log()`.

