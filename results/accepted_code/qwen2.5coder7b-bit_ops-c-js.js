function bitwise(a, b) {
  console.log(`a and b: ${a & b}`);
  console.log(`a or b: ${a | b}`);
  console.log(`a xor b: ${a ^ b}`);
  console.log(`not a: ${~a}`);
  console.log(`a << n: ${a << b}`); /* left shift */
  console.log(
    `a >> n: ${a >> b}`,
  ); /* on most platforms: arithmetic right shift */

  // convert the signed integer into unsigned, so it will perform logical shift
  let c = a >>> 0;
  console.log(`c >> b: ${c >> b}`); /* logical right shift */

  // JavaScript doesn't natively support rotation operators,
  // but we can emulate them using bitwise operations.
  // Here is an example of left rotation:
  console.log(`left rotate: ${(a << b) | (a >>> (32 - b))}`);

  // And here is an example of right rotation:
  console.log(`right rotate: ${(a >> b) | (a << (32 - b))}`);

  return;
}
