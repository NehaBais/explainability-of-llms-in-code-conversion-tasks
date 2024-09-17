function bitwise(a, b) {
  console.log("a AND b: " + (a & b));
  console.log("a OR b: " + (a | b));
  console.log("a XOR b: " + (a ^ b));
  console.log("NOT a: " + ~a);
  console.log("a << b: " + (a << b)); // left shift
  console.log("a >> b: " + (a >> b)); // arithmetic right shift
  console.log("a >>> b: " + (a >>> b)); // logical right shift
  console.log("a rol b: " + ((a << (b & 31)) | (a >>> (32 - (b & 31))))); // rotate left
  console.log("a ror b: " + ((a >>> (b & 31)) | (a << (32 - (b & 31))))); // rotate right
}
