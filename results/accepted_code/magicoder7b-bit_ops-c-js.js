function bitwise(a, b) {
  // Bitwise AND
  console.log("a and b: " + (a & b));

  // Bitwise OR
  console.log("a or b: " + (a | b));

  // Bitwise XOR
  console.log("a xor b: " + (a ^ b));

  // Bitwise NOT
  console.log("not a: " + ~a);

  // Left shift
  console.log("a << n: " + (a << b));

  // Arithmetic right shift on most platforms
  console.log("a >> n: " + (a >> b));

  /* Unsigned version of a */
  let c = a;
  if (typeof c === "number") {
    // Convert signed to unsigned integer for logical left shift.
    c &= 0xffffffff; // ensure it is in range [0,2^32-1]
  } else {
    console.log("Error: a must be an integer");
    return;
  }

  // Logical right shift
  console.log("c >> b: " + (c >> b));
}
