Here's the converted code from C to JavaScript:
```
function bitwise(a, b) {
  console.log("a and b: " + (a & b));
  console.log("a or b: " + (a | b));
  console.log("a xor b: " + (a ^ b));
  console.log("not a: " + (~a));
  console.log("a << n: " + (a << b)); // left shift
  console.log("a >> n: " + (a >> b)); // on most platforms: arithmetic right shift
  // convert the signed integer into unsigned, so it will perform logical shift
  var c = a;
  console.log("c >> b: " + (c >>> b)); // logical right shift
  // there are no rotation operators in JavaScript
  return 0;
}
```
In this converted code, we used bitwise AND (`&`), OR (`|`), XOR (`^`), and NOT (`~`) to perform the corresponding operations on two integers. We also used left shift (`<<`) and right shift (`>>`) to shift the first integer by the second integer amount of bits. Right arithmetic shift (`>>`) is used for signed integers, while logical right shift (`>>>`) is used for unsigned integers.
Note that in JavaScript, there is no bitwise NOT operator like in C, so we used the bitwise NOT (`~`) operator to invert all the bits of an integer. We also used the unsigned right shift (`>>>`) operator to perform a logical right shift on an unsigned integer.

