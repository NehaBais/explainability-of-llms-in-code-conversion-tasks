The equivalent code in JavaScript would be as follows:

```javascript
function bitwise(A, b){
  console.log("A AND b: " + (A & b));
  console.log("A OR b: "+ (A | b));
  console.log("A XOR b: "+ (A ^ b));
  console.log("NOT A: " + ~A);
  console.log("A << b: " + (A << b)); // left shift
  console.log("A >> b: " + (A >> b)); // arithmetic right shift
  console.log("A >>> b: " + (A >>> b)); // logical right shift
  // rotate functions are not available in JavaScript
}
```

JavaScript does not have a built-in function for right or left rotation, unlike Java's `Integer.rotateLeft()` and `Integer.rotateRight()`. Therefore, the JavaScript equivalent of these operations would involve manually implementing them using bitwise shift operators.
