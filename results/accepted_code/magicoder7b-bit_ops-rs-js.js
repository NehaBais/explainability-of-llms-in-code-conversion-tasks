function main() {
  const a = 105;
  const b = 91;
  console.log("a      = " + ("000000" + (a >>> 0).toString(2)).slice(-8));
  console.log("b      = " + ("000000" + (b >>> 0).toString(2)).slice(-8));
  console.log(
    "a | b  = " + ("000000" + ((a || b) >>> 0).toString(2)).slice(-8),
  );
  console.log("a & b  = " + ("000000" + (a & (b >>> 0)).toString(2)).slice(-8));
  console.log(
    "a ^ b  = " + ("000000" + (~a | (b >>> 0)).toString(2)).slice(-8),
  );
  console.log("!a     = " + ("000000" + (~a >>> 0).toString(2)).slice(-8));
  console.log(
    "a << 3 = " + ("000000" + ((a << 3) >>> 0).toString(2)).slice(-8),
  );
  console.log(
    "a >> 3 = " + ("000000" + ((a >> 3) >>> 0).toString(2)).slice(-8),
  );
}
