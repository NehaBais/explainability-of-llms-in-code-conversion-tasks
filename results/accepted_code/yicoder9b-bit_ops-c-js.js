function bitwise(a, b) {
  console.log("a and b: " + (a & b));
  console.log("a or b: " + (a | b));
  console.log("a xor b: " + (a ^ b));
  console.log("not a: " + ~a);
  console.log("a << n: " + (a << b)); // left shift
  console.log("a >> n: " + (a >> b)); // arithmetic right shift
  let c = a >>> 0; // convert signed to unsigned integer for logical shift
  console.log("c >>> b: " + (c >>> b)); // logical right shift
  return 0;
}
