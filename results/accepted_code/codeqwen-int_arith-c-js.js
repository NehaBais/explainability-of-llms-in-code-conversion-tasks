let A = parseInt(process.argv[2]);
let b = parseInt(process.argv[3]);

console.log(`A+b = ${A + b}`);
console.log(`A-b = ${A - b}`);
console.log(`A*b = ${A * b}`);
console.log(`A/b = ${Math.floor(A / b)}`); // truncates towards 0 (in C99)
console.log(`A%b = ${A % b}`); // same sign as first operand (in C99)
