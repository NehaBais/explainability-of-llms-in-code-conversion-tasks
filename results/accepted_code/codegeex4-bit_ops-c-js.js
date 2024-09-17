function bitwise(a, b) {
  console.log(`a and b: ${a & b}`);
  console.log(`a or b: ${a | b}`);
  console.log(`a xor b: ${a ^ b}`);
  console.log(`not a: ~${~a}`);
  console.log(`a << n: ${a << b}`); /* left shift */
  console.log(
    `a >> n: ${a >> b}`,
  ); /* on most platforms: arithmetic right shift */

  /* convert the signed integer into unsigned, so it will perform logical shift */
  let c = a >>> 0;
  console.log(`c >>> b: ${c >>> b}`); /* logical right shift */

  /* JavaScript does not support bitwise rotation */

  return;
}
