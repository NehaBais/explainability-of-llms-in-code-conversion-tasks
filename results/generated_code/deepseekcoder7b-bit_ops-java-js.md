In JavaScript there are no built-in methods for left and right rotate (Java's `Integer.rotateLeft` and `Integer.rotateRight`), but you can implement them using bitwise operators as follows:

```javascript
function bitwise(a, b){
  console.log("a AND b: " + (a & b));
  console.log("a OR b: "+ (a | b));
  console.log("a XOR b: "+ (a ^ b));
  console.log("NOT a: " + ~a);
  console.log("a << b: " + (a << b)); // left shift
  console.log("a >> b: " + (a >> b)); // arithmetic right shift
  
  /* To emulate left rotate and right rotate in JavaScript, you can use following code */

  // Left Rotate a by b positions
  let leftRotated = ((a << b) | (a >> (32 - b)));
  console.log("Left rotated: " + leftRotated);

  // Right Rotate a by b positions
  let rightRotated = ((a >> b) | (a << (32 - b))) & 0xFFFFFFFF;
  console.log("Right rotated: "+rightRotated);
}
```
In the above JavaScript code, it's assumed that integer `a` is a 32-bit number in both Java and JavaScript codes. The bitwise shift operators (<< , >>) perform sign extension for negative numbers but do not exist on all platforms, so when implementing bit rotation, we should use zero fill right shifts (>>>).

Please note that the logical right shift operator (>>) may behave differently compared to arithmetic right shift in JavaScript. Arithmetic right shift fills with sign bits while logical right shift fills with zeros making it suitable for positive numbers but not negative. That's why 0xFFFFFFFF mask is used as an additional step after the right rotation to make sure a result number will be always 32-bit (even in JavaScript).

