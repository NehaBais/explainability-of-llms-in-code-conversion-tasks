function bitwise(a, b) {
  console.log("a & b: " + (a & b));
  console.log("a | b: " + (a | b));
  console.log("a ^ b: " + (a ^ b));
  console.log("not a: " + ~a);
  console.log("a << n: " + (a << b)); // left shift
  console.log("a >> n: " + Math.floor(a / Math.pow(2, b))); // on most platforms: arithmetic right shift
  console.log("c >> b: " + Math.floor(c / Math.pow(2, b))); // logical right shift
}
