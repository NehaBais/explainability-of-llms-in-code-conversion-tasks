function bitwise(a, b) {
  const mask = (1 << 16) - 1; // Bitmask for truncating results to int16

  console.log("a:", a.toString(2).padStart(16, "0"));
  console.log("b:", b.toString(2).padStart(16, "0"));

  // Bitwise logical operations
  console.log("and:", (a & b).toString(2).padStart(16, "0"));
  console.log("or:", (a | b).toString(2).padStart(16, "0"));
  console.log("xor:", (a ^ b).toString(2).padStart(16, "0"));
  console.log("not:", (~a & mask).toString(2).padStart(16, "0")); // Bitwise not with masking to 16-bit

  if (b < 0) {
    console.log(
      "Right operand is negative, but all shifts require an unsigned right operand (shift distance).",
    );
    return;
  }

  // Logical shifts (unsigned left operand)
  let ua = a >>> 0; // Convert to unsigned integer first
  console.log("shl:", ((ua << b) & mask).toString(2).padStart(16, "0")); // Left shift with masking to 16-bit
  console.log("shr:", ((ua >>> b) & mask).toString(2).padStart(16, "0")); // Right logical shift with masking to 16-bit

  // Rotations
  let size = Math.clz32(~a) + 1; // Find the number of leading zeros in a
  console.log(
    "rol:",
    (((a << b) | (ua >> (size - b))) & mask).toString(2).padStart(16, "0"),
  ); // Left rotate with masking to 16-bit
  console.log(
    "ror:",
    (((ua >>> b) | (a << (size - b))) & mask).toString(2).padStart(16, "0"),
  ); // Right rotate with masking to 16-bit
}

var a = -460,
  b = 6;
bitwise(a, b);
