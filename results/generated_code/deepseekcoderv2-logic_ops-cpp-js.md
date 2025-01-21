 Here's the equivalent JavaScript code for the given C++ function:

```javascript
function printLogic(a, b) {
  console.log(`a and b is ${a && b}`);
  console.log(`a or b is ${a || b}`);
  console.log(`not a is ${!a}`);
}

// Example usage:
printLogic(true, false);
```

This JavaScript function `printLogic` takes two boolean arguments and prints the results of "and" (`&&`), "or" (`||`), and "not" (`!`) operations on them. The `console.log` statements are used to output the results in a similar formatted way as the original C++ code.
