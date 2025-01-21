 Here's the equivalent JavaScript code for the provided C code:

```javascript
let s = "hello";
let s2;

console.log(`${s} literal`);
// or
console.log(`${s}${' literal'}`);

function concatStrings(s1, s2) {
  return s1 + s2;
}

s2 = concatStrings(s, " literal");
console.log(s2);
```

This JavaScript code does the following:
1. Initializes a string variable `s` with the value "hello".
2. Logs the content of `s` concatenated with the string " literal" in two different ways using template literals.
3. Defines a function `concatStrings` that concatenates two strings and returns the result.
4. Calls `concatStrings` to concatenate `s` and " literal", assigning the result to `s2`.
5. Logs the content of `s2`.
