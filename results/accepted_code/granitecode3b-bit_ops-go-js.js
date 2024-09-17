function bitwise(a, b) {
  const mask = 0xffff; // Ensure a and b are unsigned shorts

  console.log(`a:   ${(a & mask).toString(2)}`);
  console.log(`b:   ${(b & mask).toString(2)}`);

  // Bitwise logical operations
  console.log(`and: ${(a & b).toString(2)}`);
  console.log(`or:  ${(a | b).toString(2)}`);
  console.log(`xor: ${(a ^ b).toString(2)}`);
  console.log(`not: ${~a.toString(2)}`);

  if (b < 0) {
    console.error(
      "Right operand is negative, but all shifts require an unsigned right operand (shift distance).",
    );
    return;
  }

  const ua = a & mask; // Ensure that a is also unsigned short
  const ub = b & mask;

  // Logical shifts (unsigned left operand)
  console.log(`shl: ${(ua << ub).toString(2)}`);
  console.log(`shr: ${(ua >> ub).toString(2)}`);

  // Arithmetic shifts (signed left operand)
  console.log(`las: ${(a << ub).toString(2)}`);
  console.log(`ras: ${(a >> ub).toString(2)}`);

  // Rotations
  console.log(`rol: ${((ua << ub) | (ua >> (16 - ub))) & mask}.`);
  console.log(`ror: ${((a << ub) | (a >> (16 - ub))) & mask}.`);
}

bitwise(-460, 6);
