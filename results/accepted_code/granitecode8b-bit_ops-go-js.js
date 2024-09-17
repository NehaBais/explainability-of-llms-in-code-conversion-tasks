function bitwise(a, b) {
  console.log("a: " + a.toString(2).padStart(16, "0"));
  console.log("b: " + b.toString(2).padStart(16, "0"));

  // Bitwise logical operations
  console.log("and: " + (a & b).toString(2).padStart(16, "0"));
  console.log("or: " + (a | b).toString(2).padStart(16, "0"));
  console.log("xor: " + (a ^ b).toString(2).padStart(16, "0"));
  console.log("not: " + (~a).toString(2).padStart(16, "0"));

  // Shift operations
  let c = a >>> 0;
  let d = b >>> 0;
  if (d >= 32) {
    console.log("Right operand is too large for unsigned right shift.");
    return;
  }
  console.log("shl: " + (c << d).toString(2).padStart(16, "0"));
  console.log("shr: " + (c >> d).toString(2).padStart(16, "0"));

  // Rotate operations
  let e = a >>> 0;
  if (d >= 32) {
    console.log("Right operand is too large for rotate.");
    return;
  }
  let f = Math.floor(Math.min(d, 32));
  let g = d - f;
  console.log("rol: " + ((e << f) | (e >> g)).toString(2).padStart(16, "0"));
  console.log("ror: " + ((e >> f) | (e << g)).toString(2).padStart(16, "0"));
}
bitwise(-460, 6);
