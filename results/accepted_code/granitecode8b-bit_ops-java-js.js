function bitwise(a, b) {
  console.log("a AND b: " + (a & b));
  console.log("a OR b: " + (a | b));
  console.log("a XOR b: " + (a ^ b));
  console.log("NOT a: " + ~a);
  console.log("a << b: " + (a << b)); // left shift
  console.log("a >>> b: " + (a >>> b)); // logical right shift
  console.log("a >> b: " + (a >> b)); // arithmetic right shift
  console.log("a rol b: " + rotateLeft(a, b)); //rotate left, ES6+
  console.log("a ror b: " + rotateRight(a, b)); //rotate right, ES6+
}
function rotateLeft(value, amount) {
  amount %= 32;
  return (value << amount) | (value >>> (32 - amount));
}
function rotateRight(value, amount) {
  amount %= 32;
  return (value >>> amount) | (value << (32 - amount));
}
