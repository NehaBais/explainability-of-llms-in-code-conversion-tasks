function bitwiseBuiltIns(width, a, b) {
  var mask = (1 << width) - 1;
  console.log("AND:");
  console.log("0b" + "0".repeat(width) + " & ");
  console.log("0b" + "0".repeat(width) + " = ");
  console.log(("0b" + (a & b)) & mask);

  console.log("OR:");
  console.log("0b" + "0".repeat(width) + " | ");
  console.log("0b" + "0".repeat(width) + " = ");
  console.log(("0b" + (a | b)) & mask);

  console.log("XOR:");
  console.log("0b" + "0".repeat(width) + " ^ ");
  console.log("0b" + "0".repeat(width) + " = ");
  console.log(("0b" + (a ^ b)) & mask);

  console.log("NOT:");
  console.log("~");
  console.log("0b" + "0".repeat(width));
  console.log("= 0b" + (~a & mask));
}
