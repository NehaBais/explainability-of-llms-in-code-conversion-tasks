function bitwise(a, b) {
  console.log("a and b: " + (a & b));
  console.log("a or b: " + (a | b));
  console.log("a xor b: " + (a ^ b));
  console.log("not a: " + ~a);
  console.log("a << n: " + (a << b));
  /* left shift is not directly supported in JavaScript */
  let c = a;
  console.log("c >> b: " + (c >>> b)); /* logical right shift */
  return 0;
}
