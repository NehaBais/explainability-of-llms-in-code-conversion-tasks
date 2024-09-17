function bitwise(A, b) {
  console.log("A AND b: " + (A & b));
  console.log("A OR b: " + (A | b));
  console.log("A XOR b: " + (A ^ b));
  console.log("NOT A: " + ~A);
  console.log("A << b: " + (A << b)); // left shift
  console.log("A >> b: " + (A >> b)); // arithmetic right shift
  console.log("A >>> b: " + (A >>> b)); // logical right shift
  // rotate functions are not available in JavaScript
}
