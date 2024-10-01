Sure, here's the JavaScript code that performs the same functionality as the given C++ code:
```
const myStrings = ["prepended to", "my string"];
const prepended = myStrings.reduce((a, b) => a + b, "");
console.log(prepended);
```
This code creates an array of strings called `myStrings` that contains the values "prepended to" and "my string". It then uses the `reduce()` method to concatenate all the strings in the array into a single string, which is assigned to the variable `prepended`. Finally, the `console.log()` function is used to print the value of `prepended` to the console.

