function bitwise(a, b) {
  console.log("a and b: ", a & b);
  console.log("a or b: ", a | b);
  console.log("a xor b: ", a ^ b);

  // In JavaScript bitwise NOT can be done using ~ operator but it only works on signed integers.
  // So, we use the unary plus to convert a into an unsigned integer before performing bitwise NOT operation.
  console.log("not a: ", ~a + 1);

  // In JavaScript there is no built-in way to do left or right shifts/rotate without using bit manipulation.
  // Here are equivalent of shl and shr that work for positive shift amount, but not arithmetic shift:
  console.log("a shl b: ", a << b);
  console.log("a shr b: ", a >> b);

  // Logical right shift is a bitwise operation in JavaScript too.
  let ua = a >>> 0; // convert into unsigned integer
  console.log("a lsr b: ", ua >> b);
}
