function bitwise(a, b) {
  console.log(`a AND b: ${a & b}`);
  console.log(`a OR b: ${a | b}`);
  console.log(`a XOR b: ${a ^ b}`);
  console.log(`NOT a: ${~a}`);
  console.log(`a << b: ${a << b} // left shift`);
  console.log(`a >> b: ${a >>> b} // arithmetic right shift`);
  console.log(`a >>> b: ${a >>> b} // logical right shift`);
  console.log(`a rol b: ${Integer.rotateLeft(a, b)} //rotate left, Java 1.5+`);
  console.log(
    `a ror b: ${Integer.rotateRight(a, b)} //rotate right, Java 1.5+`,
  );
}
