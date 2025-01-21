Here is the JavaScript equivalent of your C++ code:

```JavaScript
const myStrings = ["prepended to", "my string"];
const prepended = myStrings.reduce((a, b) => a + b);
console.log(prepended);
```

This code creates an array `myStrings` with two string values. Then it uses the `reduce()` function to concatenate all strings in the array into one string. Finally, it logs the concatenated string to the console.
