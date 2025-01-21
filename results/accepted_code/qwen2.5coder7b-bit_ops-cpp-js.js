function bitwise(a, b) {
  console.log("a and b:", a & b);
  console.log("a or b: ", a | b);
  console.log("a xor b: ", a ^ b);
  console.log("not a:   ", ~a);

  console.log("a shl b: ", a << b);
  console.log("a shr b: ", a >> b);
  let ua = Math.abs(a); // Since JavaScript does not have unsigned integers, we use Math.abs to simulate an unsigned right shift
  console.log("a lsr b: ", ua >>> b);

  console.log("a rol b: ", ((a << b) | (a >> (32 - b))) & 0xffffffff);
  console.log("a ror b: ", ((a >> b) | (a << (32 - b))) & 0xffffffff);
}
