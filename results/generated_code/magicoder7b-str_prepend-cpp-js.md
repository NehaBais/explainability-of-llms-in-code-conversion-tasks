 In JavaScript, you can use the `reduce` method of the array for similar functionality. Here is how to achieve it:

```javascript
const myStrings = ["prepended to", "my string"];
let prepended = myStrings.reduce((a, b) => a + ' ' + b);
console.log(prepended);
```
In the code above, `reduce` method takes in a callback function with accumulator and current value. The accumulator (initially set to an empty string in this case) is updated by adding the current element of array (`b`) after appending a space (`' '`). This process continues for all elements in the array, resulting in a new string that is the concatenation of all strings in `myStrings` with spaces in between.
