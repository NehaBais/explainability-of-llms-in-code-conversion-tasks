function main() {
  let a = 105; // u8
  let b = 91; // u8
  console.log("a      = " + a.toString(2).padStart(8, "0"));
  console.log("b      = " + b.toString(2).padStart(8, "0"));
  console.log("a | b  = " + (a | b).toString(2).padStart(8, "0"));
  console.log("a & b  = " + (a & b).toString(2).padStart(8, "0"));
  console.log("a ^ b  = " + (a ^ b).toString(2).padStart(8, "0"));
  console.log("!a     = " + (~a).toString(2).padStart(8, "0"));
  console.log("a << 3 = " + (a << 3).toString(2).padStart(8, "0"));
  console.log("a >> 3 = " + (a >> 3).toString(2).padStart(8, "0"));
}

main();
