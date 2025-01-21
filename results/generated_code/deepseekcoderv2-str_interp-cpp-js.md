 Certainly! Below is the equivalent JavaScript code for the provided C++ code snippet, which performs string interpolation to replace a placeholder in a string with a specified value.

```javascript
let original = "Mary had a X lamb.";
let toBeReplaced = "X";
let replacement = "little";

// Find the index of 'X' and replace it with 'replacement'
let newString = original.replace(toBeReplaced, replacement);

console.log(`String after replacement: ${newString}`);
```

This JavaScript code does the following:
1. Defines an `original` string containing "Mary had a X lamb.".
2. Defines a `toBeReplaced` string containing "X".
3. Defines a `replacement` string containing "little".
4. Uses the `replace` method to replace the first occurrence of `toBeReplaced` with `replacement`.
5. Outputs the modified string using template literals (backticks) for interpolation.
