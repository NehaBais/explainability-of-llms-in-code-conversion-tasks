Here is your C++ code converted to JavaScript:

```javascript
let myStrings = ["prepended to", "my string"];
let prepended = myStrings.reduce((acc, cur) => acc + cur, ''), '');
console.log(prepended);
```

The `reduce()` function in JavaScript is similar to the `accumulate` function from C++ STL. This function applies a function against an accumulator and each element in the array (from left to right) as it reduces the array into a single value. 

In this case, it's used to concatenate all strings in `myStrings` array. The initial value of the accumulator (`acc`) is an empty string (`""`). 

The second argument for the `reduce()` function is also an empty string which essentially means that initially there is no accumulated string value yet. 

As we iterate over each element (a string) in `myStrings` array, we keep adding each current string to the accumulator (`acc`) until all strings are added together and stored in the variable `prepended`. Finally, it's printed out with `console.log()`.
