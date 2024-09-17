let a = 105;
let b = 91;

console.log(`a      = ${a.toString(2).padStart(8, "0")}`);
console.log(`b      = ${b.toString(2).padStart(8, "0")}`);

console.log(`a | b  = ${(a | b).toString(2).padStart(8, "0")}`);
console.log(`a & b  = ${(a & b).toString(2).padStart(8, "0")}`);
console.log(`a ^ b  = ${(a ^ b).toString(2).padStart(8, "0")}`);

console.log(`!a     = ${(~a >>> 0).toString(2).padStart(8, "0")}`); // Bitwise NOT in JavaScript is for signed integers. We use unsigned right shift >>> to mimic it

console.log(`a << b = ${(a << b).toString(2).padStart(8, "0")}`);
console.log(`a >> b = ${(a >> b).toString(2).padStart(8, "0")}`);

// In JavaScript bitwise operations are performed on signed integers.
// So for the rotate operation we have to implement it manually

function rotateLeft(a, b) {
  return (a << b) | (a >>> (8 - b));
}

function rotateRight(a, b) {
  return (a >> b) | (a << (8 - b));
}

console.log(`a <<< b = ${rotateLeft(a, b).toString(2).padStart(8, "0")}`);
console.log(`a >>>> b = ${rotateRight(a, b).toString(2).padStart(8, "0")}`);
