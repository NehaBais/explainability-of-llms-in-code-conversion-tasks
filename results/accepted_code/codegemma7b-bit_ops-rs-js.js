const a = 105;
const b = 91;

console.log(`a      = ${a.toString(2).padStart(8, "0")}`);
console.log(`b      = ${b.toString(2).padStart(8, "0")}`);
console.log(`a | b  = ${(a | b).toString(2).padStart(8, "0")}`);
console.log(`a & b  = ${(a & b).toString(2).padStart(8, "0")}`);
console.log(`a ^ b  = ${(a ^ b).toString(2).padStart(8, "0")}`);
console.log(`!a     = ${(~a).toString(2).padStart(8, "0")}`);
console.log(`a << 3 = ${(a << 3).toString(2).padStart(8, "0")}`);
console.log(`a >> 3 = ${(a >> 3).toString(2).padStart(8, "0")}`);
