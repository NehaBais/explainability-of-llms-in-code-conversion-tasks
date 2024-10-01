This is how the equivalent JavaScript code would look like. Note that in JS we don't have bitwise logical operators like &, | and ^ in C++ so we use bitwise AND operator "&" for performing bitwise AND operation on integers. Also, the shift operations are handled using "<<", ">>" and ">>>" respectively.

```javascript
function bitwise(a, b) {
  console::console.log("a & b: " + (a & b)); // Note: parentheses are needed because & has lower precedence than <<
  console::console.log("a | b:  " + (a | b));
  console::console.log("a ^ b: " + (a ^ b));
  console::console.log("not a:   " + ~a);

  // Note: the JavaScript shift operators are guaranteed to work with both positive and negative shift amounts.
  console::console.log("a shl b: " + (a << b)); // Note: "<<" is used for left shift
  console::console.log("a shr b: " + (a >> b)); // typically arithmetic right shift, but guaranteed
  var ua = a;
  console::console.log("a lsr b: " + (ua >> b)); // logical right shift (guaranteed)

  // JS does not have rotate functions like C++, so we simulate it using the built-in function for left rotation.
  console::console.log("a rol b: " + rotateLeft(ua, b)); 
  console::console.log("a ror b: " + rotateRight(ua, b)); 
}
```
For simulating a bitwise right rotation, we can use the formula `(data << bits) | (data >> (bits - sign_bits))` where `bits` is the amount of rotations and `sign_bits` is how many significant bits there are in the integer. Note that this might not work if you're rotating a signed integer. If you need to rotate a signed integer, you should convert it to an unsigned int first, perform the bitwise rotation, then convert it back to its original sign if necessary.
