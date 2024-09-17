function bitwise(a, b) {
  console.log("a AND b: " + (a & b));
  console.log("a OR b: " + (a | b));
  console.log("a XOR b: " + (a ^ b));
  console.log("NOT a: " + ~a);
  console.log("a << b: " + (a << b)); // left shift
  console.log("a >> b: " + (a >> b)); // arithmetic right shift

  /* To emulate left rotate and right rotate in JavaScript, you can use following code */

  // Left Rotate a by b positions
  let leftRotated = (a << b) | (a >> (32 - b));
  console.log("Left rotated: " + leftRotated);

  // Right Rotate a by b positions
  let rightRotated = ((a >> b) | (a << (32 - b))) & 0xffffffff;
  console.log("Right rotated: " + rightRotated);
}
