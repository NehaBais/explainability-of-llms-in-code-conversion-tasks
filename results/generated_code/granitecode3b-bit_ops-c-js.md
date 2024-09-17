Sure! Here's the equivalent JavaScript code:
```
function bitwise(a, b) {
  console.log("a and b: " + (a & b));
  console.log("a or b: " + (a | b));
  console.log("a xor b: " + (a ^ b));
  console.log("not a: " + (~a));
  console.log("a << n: " + (a << b)); /* left shift */
  console.log("a >> n: " + (a >> b)); /* on most platforms: arithmetic right shift */
  /* convert the signed integer into unsigned, so it will perform logical shift */
  var c = a;
  console.log("c >> b: " + (c >> b)); /* logical right shift */
  /* there are no rotation operators in JavaScript */
  return 0;
}
```
Note that in JavaScript, left shift (`<<`) is a bitwise operator that multiplies the value by `2` to the power of the number of bits specified by the right operand. Right shift (`>>`) also performs a bitwise shift, but unlike C's `>>`, it discards the fractional part and returns an integer.

