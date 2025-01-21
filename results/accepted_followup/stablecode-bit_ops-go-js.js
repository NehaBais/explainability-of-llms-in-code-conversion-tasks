function bitwise(a, b) {
  console.log(`\n a:   ${a.toString(2)}`);
  console.log(`\n b:   ${b.toString(2))}}}`);

  // Bitwise logical operations
  console.log(`and: 	${bitAnd(a, b))}}`);
  console.log(`or:  	${bitOr(a, b))}}`);
  console.log(`xor: 	${bitXor(a, b))}}}`);
  console.log(`not:  	${~a}}`);

  const shiftDistance = b < 0 ? (16 + b) : b;

  // Logical shifts (unsigned left operand)
  console.log(`shl: 	${bitShiftLeft(a, shiftDistance))}}}`);
  console.log(`shr: 	${bitShiftRight(a, shiftDistance))}}}`);

  // Arithmetic shifts (signed left operand)
  console.log(`las: 	${bitShiftLeftWithCarry(a, shiftDistance))}}}`);
  console.log(`ras: 	${bitShiftRightWithCarry(a, shiftDistance))}}}`);

  // Rotations
  const rotateAmount = b < 0 ? (16 + b) : b;
  console.log(`rotateLeft: ${rotateLeft(a, rotateAmount))}}`);
  console.log(`rotateRight: ${rotateRight(a, rotateAmount))}}`);
}

main();