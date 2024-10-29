Here is the equivalent JavaScript code for your C++ program. 
```javascript
let myStrings = [ "prepended to", "my string" ];
let prepended = myStrings.reduce((a, b) => a + b);
console.log(prepended);
```
This JavaScript code does the same thing as your C++ code - it creates an array of strings, uses `reduce` to concatenate them into one string, and then logs that string to the console. The function you passed to `reduce()` is a arrow function equivalent to what was in your C++ program.

