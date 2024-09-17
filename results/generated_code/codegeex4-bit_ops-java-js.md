Here is the JavaScript equivalent of your Java code:

```javascript
function bitwise(a, b){
  console.log(`a AND b: ${(a & b)}`);
  console.log(`a OR b: ${(a | b)}`);
  console.log(`a XOR b: ${(a ^ b)}`);
  console.log(`NOT a: ${~a}`);
  console.log(`a << b: ${(a << b)}`); // left shift
  console.log(`a >> b: ${(a >> b)}`); // arithmetic right shift
  console.log(`a >>> b: ${(a >>> b)}`); // logical right shift

  function rotateLeft(a, b){
    return (a<<b | a>>>(32-b));
  }

  function rotateRight(a, b){
    return (a>>>b | a<<(32-b));
  }
  
  console.log(`a rol b: ${rotateLeft(a, b)}`); //rotate left
  console.log(`a ror b: ${rotateRight(a, b)}`); //rotate right
}
```

Note that JavaScript does not have built-in methods for rotate left and right operations like Java's `Integer.rotateLeft()` and `Integer.rotateRight()`. So, we've created functions to perform these operations. The rotation amounts are assumed to be in the range 0-31 (as per JS bitwise shift rules).
