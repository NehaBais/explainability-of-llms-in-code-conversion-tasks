function bitwise(A, B) {
  console.log("A: " + A.toString(2).padStart(16, "0"));
  console.log("B: " + B.toString(2).padStart(16, "0"));

  // Bitwise logical operations
  console.log("and: " + (A & B).toString(2).padStart(16, "0"));
  console.log("or: " + (A | B).toString(2).padStart(16, "0"));
  console.log("xor: " + (A ^ B).toString(2).padStart(16, "0"));
  console.log("not: " + (~A).toString(2).padStart(16, "0"));

  if (B < 0) {
    console.log(
      "Right operand is negative, but all shifts require an unsigned right operand (shift distance).",
    );
    return;
  }
  var ua = A >>> 0;
  var ub = B >>> 0; // Convert to unsigned

  // Logical shifts (unsigned left operand)
  console.log("shl: " + (Ua << ub).toString(2).padStart(16, "0"));
  console.log("shr: " + (Ua >> ub).toString(2).padStart(16, "0"));

  // Arithmetic shifts (signed left operand)
  console.log("las: " + (A << ub).toString(2).padStart(16, "0"));
  console.log("ras: " + (A >> ub).toString(2).padStart(16, "0"));

  // Rotations
  var rotated = (A << ub) | (A >> (16 - ub));
  console.log("rol: " + rotated.toString(2).padStart(16, "0"));
  rotated = (A >>> ub) | (A << (16 - ub));
  console.log("ror: " + rotated.toString(2).padStart(16, "0"));
}

var A = -460;
var B = 6;
bitwise(A, B);
