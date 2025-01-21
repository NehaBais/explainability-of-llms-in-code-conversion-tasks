function bitwise(a, b) {
  console.log("a:   " + a.toString(2).padStart(16, "0"));
  console.log("b:   " + b.toString(2).padStart(16, "0"));

  // Bitwise logical operations
  console.log("and: " + (a & b).toString(2).padStart(16, "0"));
  console.log("or:  " + (a | b).toString(2).padStart(16, "0"));
  console.log("xor: " + (a ^ b).toString(2).padStart(16, "0"));
  console.log("not: " + (~a & 0xffff).toString(2).padStart(16, "0"));

  if (b < 0) {
    console.log(
      "Right operand is negative, but all shifts require an unsigned right operand (shift distance).",
    );
    return;
  }

  // Logical shifts (unsigned left operand)
  console.log("shl: " + ((a << b) & 0xffff).toString(2).padStart(16, "0"));
  console.log("shr: " + (a >> b).toString(2).padStart(16, "0"));

  // Arithmetic shifts (signed left operand)
  console.log("las: " + ((a << b) & 0xffff).toString(2).padStart(16, "0"));
  console.log("ras: " + (a >> b).toString(2).padStart(16, "0"));

  // Rotations
  console.log(
    "rol: " +
      (((a << b) | (a >>> (16 - b))) & 0xffff).toString(2).padStart(16, "0"),
  );
  console.log(
    "ror: " +
      ((((a >>> b) | (a << (16 - b))) & 0xffff) >>> 0)
        .toString(2)
        .padStart(16, "0"),
  );
}

bitwise(-460, 6);
