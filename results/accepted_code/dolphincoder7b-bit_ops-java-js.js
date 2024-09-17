function bitwise(a, b) {
  console.log("a AND b: " + (a & b));
  console.log("a OR b: " + (a | b));
  console.log("a XOR b: " + (a ^ b));
  console.log("NOT a: " + ~a);
  console.log("a << b: " + (a << b)); // left shift
  console.log("a  >> b: " + (a >> b)); // arithmetic right shift
  console.log("a  >>> b: " + (a >>> b)); // logical right shift
  console.log("a rol b: " + rotateLeft(a, b)); //rotate left
  console.log("a ror b: " + rotateRight(a, b)); //rotate right
}

function rotateLeft(n, bits) {
  return (n << bits) | ((n >>> (32 - bits)) & 0xffffffff);
}

function rotateRight(n, bits) {
  return (n >>> bits) | ((n << (32 - bits)) & 0xffffffff);
}
