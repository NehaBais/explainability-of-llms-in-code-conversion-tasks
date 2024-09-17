```javascript
function bitwise(a, b) {
  console.log(`a:    ${a.toString(2)}
`);
  console.log(`b:    ${b.toString(2)}
`);

  // Bitwise logical operations
  console.log(`and:  ${(a & b).toString(2)}
`);
  console.log(`or:   ${(a | b).toString(2)}
`);
  console.log(`xor:  ${(a ^ b).toString(2)}
`);
  console.log(`not:  ${~a.toString(2)}
`);

  if (b < 0) {
    console.log("Right operand is negative, but all shifts require an unsigned right operand (shift distance).");
    return;
  }

  // Logical shifts (unsigned left operand)
  const shl = a << b;
  console.log(`shl:  ${shl.toString(2)}
`);
  const shr = a >> b;
  console.log(`shr:  ${shr.toString(2)}
`);

  // Arithmetic shifts (signed left operand)
  const las = a << b;
  console.log(`las:  ${las.toString(2)}
`);
  const ras = a >> b;
  console.log(`ras:  ${ras.toString(2)}
`);

  // Rotations
  const rol = (a << b) | ((a & 0xFFFF) >>> (16 - b));
  console.log(`rol:  ${rol.toString(2)}
`);
  const ror = ((a & 0xFFFF) << (16 - b)) | a >>> b;
  console.log(`ror:  ${ror.toString(2)}
`);
}

const [a, b] = [-460, 6];
bitwise(a, b);
```
