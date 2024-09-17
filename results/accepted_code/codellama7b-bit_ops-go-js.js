function bitwise(a, b) {
  // Bitwise logical operations
  console.log(`a:   ${a.toString(2)}`);
  console.log(`b:   ${b.toString(2)}`);
  console.log(`and: ${(a & b).toString(2)}`);
  console.log(`or:  ${(a | b).toString(2)}`);
  console.log(`xor: ${(a ^ b).toString(2)}`);
  console.log(`not: ${(~a).toString(2)}`);

  if (b < 0) {
    console.log(
      "Right operand is negative, but all shifts require an unsigned right operand (shift distance).",
    );
    return;
  }
  const ua = a >>> 0; // Convert to unsigned integer
  const ub = b >>> 0; // Convert to unsigned integer

  // Logical shifts (unsigned left operand)
  console.log(`shl: ${(ua << ub).toString(2)}`);
  console.log(`shr: ${(ua >> ub).toString(2)}`);

  // Arithmetic shifts (signed left operand)
  console.log(`las: ${(a << ub).toString(2)}`);
  console.log(`ras: ${(a >> ub).toString(2)}`);

  // Rotations
  console.log(`rol: ${((a << ub) | (a >>> (16 - ub))).toString(2)}`);
  console.log(`ror: ${((a >>> ub) | (a << (16 - ub))).toString(2)}`);
}

const a = -460; // Go uses int16
const b = 6; // Go uses int16
bitwise(a, b);
