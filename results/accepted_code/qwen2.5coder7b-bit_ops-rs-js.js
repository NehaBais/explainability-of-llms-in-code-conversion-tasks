const a = 105;
const b = 91;

console.log(`a      = ${a.toString(2).padStart(8, "0")}`);
console.log(`b      = ${b.toString(2).padStart(8, "0")}`);
console.log(`a | b  = ${(a | b).toString(2).padStart(8, "0")}`);
console.log(`a & b  = ${(a & b).toString(2).padStart(8, "0")}`);
console.log(`a ^ b  = ${(a ^ b).toString(2).padStart(8, "0")}`);
console.log(`!a     = ${(~a >>> 0).toString(2).padStart(8, "0")}`); // Use bitwise NOT and zero-fill to handle negative values

// For left shift
let shiftedLeftA = a << b;
shiftedLeftA = shiftedLeftA.toString(2).padStart(8, "0");
console.log(`a << ${b} = ${shiftedLeftA}`);

// For right shift
let shiftedRightA = a >> b;
shiftedRightA = shiftedRightA.toString(2).padStart(8, "0");
console.log(`a >> ${b} = ${shiftedRightA}`);

// For right arithmetic shift
let shiftedRightArithmeticA = Math.trunc(a / Math.pow(2, b))
  .toString(2)
  .padStart(8, "0");
console.log(`a >>> ${b} = ${shiftedRightArithmeticA}`); // Use arithmetic shift for JavaScript
