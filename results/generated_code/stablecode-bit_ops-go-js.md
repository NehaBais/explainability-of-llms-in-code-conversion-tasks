Here is the equivalent JavaScript code:

```javascript
function bitwise(a, b) {
  console.log(`\n a:   ${a.toString(2)}`);
  console.log(`\n b:   ${b.toString(2)}`);

  // Bitwise logical operations
  console.log(`and: ${bitAnd(a, b))}`);
  console.log(`or:  ${bitOr(a, b))}`);
  console.log(`xor: ${bitXor(a, b)))}`);
  console.log(`not:  ${~a}}`);

  const shiftDistance = b < 0 ? (16 + b) : b;

  // Logical shifts (unsigned left operand)
  console.log(`shl: ${bitShiftLeft(a, shiftDistance))}`);
  console.log(`shr: ${bitShiftRight(a, shiftDistance))}}`);

  // Arithmetic shifts (signed left operand)
  console.log(`las: ${bitShiftLeftWithCarry(a, shiftDistance))}`);
  console.log(`ras: ${bitShiftRightWithCarry(a, shiftDistance))}}`);

  // Rotations
  const rotateAmount = b < 0 ? (16 + b) : b;
  console.log(`rol: ${rotateLeft(a, rotateAmount))}`);
  console.log(`ror: ${rotateRight(a, rotateAmount))}}`);
}

function bitAnd(a, b) {
  return a & b;
}

function bitOr(a, b) {
  return a | b;
}

function bitXor(a, b) {
  return a ^ b;
}

function bitShiftLeft(value, shiftDistance) {
  return value << shiftDistance;
}

function bitShiftRight(value, shiftDistance) {
  return value >> shiftDistance;
}

function bitShiftLeftWithCarry(value, shiftDistance) {
  let result = 0;

  for (let i = 1; i <= shiftDistance; i++) {
    result += value;
  }

  return result;
}

function bitShiftRightWithCarry(value, shiftDistance) {
  let result = 0;

  for (let i = 1; i <= shiftDistance; i++) {
    if ((i & 15) == 15) {
      result += value;
    }
  }

  return result;
}

function rotateLeft(value, rotateAmount) {
  const maskSize = 32 - (rotateAmount % 32));
  const mask = (1 << maskSize) - 1;
  const shiftedValue = (value << rotateAmount) | (value >> (32 - rotateAmount)));

  return shiftedValue & mask;
}

function rotateRight(value, rotateAmount) {
  const maskSize = 32 - (rotateAmount % 32));
  const mask = (1 << maskSize) - 1;
  const shiftedValue = ((value >> rotateAmount) | (value << (32 - rotateAmount)))) & mask;

  return shiftedValue;
}

function main() {
  const a = -460;
  const b = 6;

  bitwise(a, b);
}

main();
```

In this JavaScript code, I have converted the given Golang code to JavaScript. The `bitwise` function is responsible for performing bitwise operations on two integers (`a` and `b`). The other functions are helper functions used by the `bitwise` function.
