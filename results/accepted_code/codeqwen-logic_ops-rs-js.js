function booleanOps(A, b) {
  console.log(`${A} and ${b} -> ${A && b}`);
  console.log(`${A} or ${b} -> ${A || b}`);
  console.log(`${A} xor ${b} -> ${A ^ b}`);
  console.log(`not ${A} -> ${!A}`);
}

booleanOps(true, true);
booleanOps(true, false);
booleanOps(false, true);
booleanOps(false, false);
