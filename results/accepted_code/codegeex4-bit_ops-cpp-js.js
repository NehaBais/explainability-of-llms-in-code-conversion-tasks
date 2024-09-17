function bitwise(a, b) {
  console.log("a and b: ", a & b);
  console.log("a or b:  ", a | b);
  console.log("a xor b: ", a ^ b);
  console.log("not a:   ", ~a);

  // Note: the JavaScript shift operators are not guaranteed to work if the shift count (that is, b)
  // is negative, or is greater or equal to the number of bits in the integer being shifted.
  console.log("a shl b: ", a << b);
  console.log("a shr b: ", a >> b); // typically arithmetic right shift, but not guaranteed
  let ua = a >>> 0; // logical right shift (guaranteed)
  console.log("a lsr b: ", ua >>> b);

  // The rotate function works for all rotation amounts, but the integer being rotated must always be an
  // unsigned integer.
  console.log("a rol b: ", ((ua << b) | (ua >>> (32 - b))) & 0xffffffff);
  console.log("a ror b: ", ((ua >>> b) | (ua << (32 - b))) & 0xffffffff);
}
