function booleanOps(a, b) {
  console.log(`${a} and ${b} -> ${a && b}`);
  console.log(`${a} or ${b} -> ${a || b}`);
  // XOR operation in JavaScript can be done by the following method
  console.log(`${a} xor ${b} -> ${(a || b) && !(a && b)}`);
  console.log(`not ${a} -> ${!a}`);
}

function main() {
  booleanOps(true, true);
  booleanOps(true, false);
  booleanOps(false, true);
  booleanOps(false, false);
}

main();
