let a, b;
console.log("Enter two integers:");
[a, b] = [parseInt(readline()), parseInt(readline())];
console.log(`${a} + ${b} = ${a + b}`);
console.log(`${a} - ${b} = ${a - b}`);
console.log(`${a} * ${b} = ${a * b}`);
console.log(`${a} / ${b} = ${Math.floor(a / b)}`); // rounds towards negative infinity
console.log(`${a} % ${b} = ${a % b}`); // same sign as first operand
// no exponentiation operator
