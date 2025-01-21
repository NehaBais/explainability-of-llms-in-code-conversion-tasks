function bitwise(a, b) {
  console.log(`a AND b: ${a & b}`);
  console.log(`a OR b: ${a | b}`);
  console.log(`a XOR b: ${a ^ b}`);
  console.log(`NOT a: ~${a}`);
  console.log(`a << b: ${a << b}`); // left shift
  console.log(`a >> b: ${a >> b}`); // arithmetic right shift
  console.log(`a >>> b: ${a >>> b}`); // logical right shift
  console.log(`a rol b: ${Math.imul(a, Math.pow(2, b))}`); // rotate left, JavaScript 1.5+
  console.log(`a ror b: ${Math.imul(Math.pow(2, b), a)}`); // rotate right, JavaScript 1.5+
}
