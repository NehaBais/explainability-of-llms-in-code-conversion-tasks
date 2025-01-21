In JavaScript, you can use the `concat` method to append strings to another string. Here is how you could convert your C++ code into JavaScript:

```javascript
let myStrings = ["prepended to", "my string"];
let prepended = myStrings.reduce((a, b) => a.concat(b));
console.log(prepended);
```

In this code:
- We create an array `myStrings` with the strings you want.
- We use the `reduce` method on this array. The callback function takes two parameters: the accumulated value (`a`) and the current element (`b`). It returns a new string that is the result of concatenating `a` and `b`.
- Finally, we print the resulting string to the console.
