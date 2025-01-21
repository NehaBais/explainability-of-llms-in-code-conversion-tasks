function bitwise(a, b) {
  console.log(`a:   ${a.toString(2).padStart(16, "0")}`);
  console.log(`b:   ${b.toString(2).padStart(16, "0")}`);

  // Bitwise logical operations
  const and = a & b;
  const or = a | b;
  const xor = a ^ b;

  console.log(`and: ${and.toString(2).padStart(16, "0")}`);
  console.log(`or:  ${or.toString(2).padStart(16, "0")}`);
  console.log(`xor: ${xor.toString(2).padStart(16, "0")}`);

  if (b < 0) {
    console.log(
      "Right operand is negative, but all shifts require an unsigned right operand (shift distance).",
    );
    return;
  }
  const ua = a >>> 0;
  const ub = b >>> 0;

  // Logical shifts
  console.log(`shl: ${ua << ub.toString(2).padStart(16, "0")}`);
  console.log(`shr: ${ua >> ub.toString(2).padStart(16, "0")}`);

  // Arithmetic shifts (signed left operand)
  console.log(`las: ${ua << ub.toString(2).padStart(16, "0")}`);
  console.log(`ras: ${ua >>> ub.toString(2).padStart(16, "0")}`);

  // Rotations
  const rola = a << ub % 32;
  const rora = ((a >>> (32 - ub)) | a) << ub % 32;

  console.log(`rol: ${rola.toString(2).padStart(16, "0")}`);
  console.log(`ror: ${rora.toString(2).padStart(16, "0")}`);
}

bitwise(-460, 6);
