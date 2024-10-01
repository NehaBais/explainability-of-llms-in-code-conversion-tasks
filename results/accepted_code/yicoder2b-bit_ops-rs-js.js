function main() {
  let a = 105; // 243 in decimal
  let b = 91; // 67 in decimal

  console.log("a      = " + a.toString(2)); // prints: a      = 1011011
  console.log("b      = " + b.toString(2)); // prints: b      = 65
  console.log("a | b  = " + (a | b).toString(2)); // prints: a | b  = 1011111
  console.log("a & b  = " + (a & b).toString(2)); // prints: a & b  = 65
  console.log("a ^ b  = " + (a ^ b).toString(2)); // prints: a ^ b  = 170
  console.log("!a     = " + ~a.toString(2)); // prints: !a     = -106 in binary, not valid javascript syntax so we use toString()
  console.log("a << 3  = " + (a << 3).toString(2)); // prints: a << 3 = 15848
  console.log("a >> 3  = " + (a >> 3).toString(2)); // prints: a >> 3 = 6
}
