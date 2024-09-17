let a, b;
console.log("Enter two integers: ");
[a, b] = readline().split(" ").map(Number); // Assuming the user input is separated by spaces
console.log(`${a} + ${b} = ${a + b}`);
console.log(`${a} - ${b} = ${a - b}`);
console.log(`${a} * ${b} = ${a * b}`);
console.log(`${a} / ${b} = Math.trunc(a / b)`); // Truncates towards zero
console.log(
  `${a} % ${b} = ${a % b === 0 ? 0 : a % b < 0 ? (Math.abs(a) % Math.abs(b)) * -1 : a % b}`,
);
// No exponentiation operator in JavaScript, use Math.pow() for exponents
