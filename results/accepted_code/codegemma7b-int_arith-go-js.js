const a = parseInt(prompt("enter two integers: ").split(" ")[0]);
const b = parseInt(prompt("enter two integers: ").split(" ")[1]);

console.log(`${a} + ${b} = ${a + b}`);
console.log(`${a} - ${b} = ${a - b}`);
console.log(`${a} * ${b} = ${a * b}`);
console.log(`${a} / ${b} = ${Math.floor(a / b)}`); // truncates towards 0
console.log(`${a} % ${b} = ${a % b}`); // same sign as first operand
