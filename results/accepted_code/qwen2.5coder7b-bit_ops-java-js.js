function bitwise(a, b) {
  console.log("a AND b: " + (a & b));
  console.log("a OR b: " + (a | b));
  console.log("a XOR b: " + (a ^ b));
  console.log("NOT a: " + ~a);

  var shiftedLeft = a << b;
  console.log("a << b: " + shiftedLeft);

  var shiftedRightArithmetic = a >> b;
  console.log("a >> b: " + shiftedRightArithmetic);

  var shiftedRightLogical = a >>> b;
  console.log("a >>> b: " + shiftedRightLogical);

  // JavaScript does not have built-in methods for bit rotation. We need to create custom functions.
  var rotatedLeft = (a << b) | (a >> (32 - b)); // Assuming 32-bit integers
  console.log("a rol b: " + rotatedLeft);

  var rotatedRight = (a >> b) | (a << (32 - b)); // Assuming 32-bit integers
  console.log("a ror b: " + rotatedRight);
}
