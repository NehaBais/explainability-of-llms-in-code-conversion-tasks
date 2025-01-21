Sure, here is the JavaScript equivalent of your C code:

```javascript
function bitwise(a, b) {
  console.log("a & b: " + (a & b));
  console.log("a | b: " + (a | b));
  console.log("a ^ b: " + (a ^ b));
  console.log("not a: " + (~a));
  console.log("a << n: " + (a << b)); // left shift
  console.log("a >> n: " + Math.floor(a / Math.pow(2, b))); // on most platforms: arithmetic right shift
  console.log("c >> b: " + Math.floor(c / Math.pow(2, b))); // logical right shift
}
```

Note that the JavaScript Math.floor() function is used for right shifting because in JavaScript, bitwise shifts are always signed. This means that left shifting a positive number will return zero and left shifting a negative number will return NaN. Hence, we use Math.floor to perform the arithmetic right shift.

Also note that JavaScript doesn't have bitwise rotate operators like C do. In JavaScript, you can get the leftmost or rightmost bits of a number by using bitwise ANDing with 1 and right shifting by `b` places respectively. For example, `(a >> b) & 1` will give the leftmost bit, and `(a << b) >> (32 - b)` will give the rightmost bit.

However, if you have to perform a left rotate or right rotate operation on a JavaScript number, you can't do it directly. But you can use bitwise operations to achieve this behavior. For example, to perform a left rotation, you can create a new number by moving bits from the end of the original number to the start, and then shift the result by `b` places. Similarly, for right rotate, you move bits from the start of the original number to the end, and then shift the result by `b` places.
