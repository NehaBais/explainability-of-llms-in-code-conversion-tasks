function bitwise(a, b) {
  // Convert the integers to binary strings for simplicity of manipulation
  let aBin = a.toString(2);
  let bBin = b.toString(2);

  console.log(`a:   ${aBin}`);
  console.log(`b:   ${bBin}`);

  // Bitwise logical operations
  console.log(`and: ${Number((a & b).toString(2))}`);
  console.log(`or:  ${Number((a | b).toString(2))}`);
  console.log(`xor: ${Number((a ^ b).toString(2))}`);
  console.log(`not: ${~a & (Math.pow(2, 16) - 1)}`); // bitwise NOT on first integer a

  if (b < 0) {
    console.error(
      "Right operand is negative, but all shifts require an unsigned right operand (shift distance).",
    );
    return;
  }
  const ua = Number(aBin);
  const ub = b;

  // Logical shifts (unsigned left operand)
  console.log(`shl: ${Number((ua << ub).toString(2))}`);
  console.log(`shr: ${Number((ua >> ub).toString(2))}`);

  // Arithmetic shifts (signed left operand)
  console.log(`las: ${Number((a << ub).toString(2))}`);
  console.log(`ras: ${Number((a >> ub).toString(2))}`);

  // Rotations
  const rol = Number(
    ((ua << ub) | ((~a & (Math.pow(2, 16) - 1)) >>> 0)).toString(2),
  ); // left rotate
  const ror = Number(~~(~a & (Math.pow(2, 16) - 1)) | (ua >> ub).toString(2)); // right rotate
  console.log(`rol: ${rol}`);
  console.log(`ror: ${ror}`);
}

// testing the function with a and b variables from the Go code
bitwise(-460, 6);
