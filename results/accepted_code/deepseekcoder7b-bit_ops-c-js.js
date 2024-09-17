function bitwise(a, b) {
  console.log("a and b: " + (a & b));
  console.log("a or b: " + (a | b));
  console.log("a xor b: " + (a ^ b));

  /* JavaScript performs bitwise NOT using the ~ operator, but it works differently than C 
       because in JS ~n equals -(n + 1), so we use ~a & 0xFFFFFFFF to get a 32-bit number */
  console.log("not a: " + (~a & 0xffffffff));

  console.log("a << b: " + (a << b)); /* left shift */
  console.log(
    "a >> b: " + (a >> b),
  ); /* on most platforms: arithmetic right shift */

  var c =
    a >>> b; /* JavaScript performs logical right shift using >>> operator */
  console.log("c >> b: " + c); /* logical right shift */

  return;
}
