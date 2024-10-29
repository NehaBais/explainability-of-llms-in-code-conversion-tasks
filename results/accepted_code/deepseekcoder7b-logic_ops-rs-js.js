function booleanOps(a, b) {
  console.log(a + " and " + b + " -> " + (a && b));
  console.log(a + " or " + b + " -> " + (a || b));
  // Javascript's ^ operator is equivalent to XOR in Rust, so we can use it directly
  console.log(a + " xor " + b + " -> " + (a ^ b));
  console.log("not " + a + " -> " + !a);
}

booleanOps(true, true);
booleanOps(true, false);
booleanOps(false, true);
booleanOps(false, false);
