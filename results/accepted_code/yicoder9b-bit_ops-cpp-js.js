function bitwise(a, b) {
  console.log("a and b: " + (a & b));
  console.log("a or b:  " + (a | b));
  console.log("a xor b: " + (a ^ b));
  console.log("not a:   " + ~a);
  // Note: the JavaScript shift operators are not guaranteed to work if the shift count (that is, b)
  // is negative, or is greater than or equal to the number of bits in the integer being shifted.
  console.log("a shl b: " + (a << b));
  console.log("a shr b: " + (a >> b)); // typically arithmetic right shift, but not guaranteed
  let ua = a;
  console.log("a lsr b: " + (ua >>> b)); // logical right shift (guaranteed)

  // there are no rotation operators in JavaScript, so create custom functions to achieve that
  function rotl(x, y) {
    return (x << y) | (x >>> (32 - y));
  }
  console.log("a rol b: " + rotl(ua, b));

  function rotr(x, y) {
    return (x >>> y) | (x << (32 - y));
  }
  console.log("a ror b: " + rotr(ua, b));
}
