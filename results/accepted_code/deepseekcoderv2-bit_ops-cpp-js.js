function bitwise(a, b) {
  console.log("a and b:", a & b);
  console.log("a or b:", a | b);
  console.log("a xor b:", a ^ b);
  console.log("not a:", ~a);

  // Note: the C/C++ shift operators are not guaranteed to work if the shift count (that is, b)
  // is negative, or is greater or equal to the number of bits in the integer being shifted.
  console.log("a shl b:", a << b); // Note: "<<" is used both for output and for left shift
  console.log("a shr b:", a >> b); // typically arithmetic right shift, but not guaranteed
  let ua = a >>> 0; // logical right shift using unsigned conversion
  console.log("a lsr b:", ua >> b);

  // There are no rotation operators in JavaScript, but you can implement them if needed.
  // Here's an example of how to left rotate and right rotate:
  function leftRotate(value, shift) {
    return (value << shift) | (value >>> (32 - shift));
  }

  function rightRotate(value, shift) {
    return (value >>> shift) | (value << (32 - shift));
  }

  console.log("a rol b:", leftRotate(ua, b));
  console.log("a ror b:", rightRotate(ua, b));
}
