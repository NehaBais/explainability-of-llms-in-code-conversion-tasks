function bitwise(a, b) {
  console.log(`a and b: ${a & b}`);
  console.log(`a or b: ${a | b}`);
  console.log(`a xor b: ${a ^ b}`);
  console.log(`not a: ${~a}`);

  // Note: the C/C++ shift operators are not guaranteed to work if the shift count (that is, b)
  // is negative, or is greater or equal to the number of bits in the integer being shifted.
  console.log(`a shl b: ${a << b}`); // Note: "<<" is used both for output and for left shift
  console.log(`a shr b: ${a >> b}`); // typically arithmetic right shift, but not guaranteed

  let ua = a;
  console.log(`a lsr b: ${ua >>> b}`); // logical right shift (guaranteed)

  // there are no rotation operators in JavaScript, but as of ECMAScript 20 (ES11),
  // there is now a standard-library rotate function.
  console.log(`a rol b: ${(a << b) | (a >>> (32 - b))}`);
  console.log(`a ror b: ${(a >> b) | (a << (32 - b))}`);
}
