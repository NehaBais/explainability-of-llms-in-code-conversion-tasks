process.stdout.write("Enter two integers: ");
let a = +readlineSync();
let b = +readlineSync();
console.log(`${a} + ${b} = ${a + b}`);
console.log(`${a} - ${b} = ${a - b}`);
console.log(`${a} * ${b} = ${a * b}`);
console.log(`${a} / ${b} = ${Math.floor(a / b)}`); // truncates towards zero
console.log(`${a} % ${b} = ${a % b}`); // same sign as first operand
// no exponentiation operator in JavaScript, but you can use a function if needed
