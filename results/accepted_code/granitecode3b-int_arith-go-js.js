function main() {
  let a = parseInt(prompt("Enter the first integer"));
  let b = parseInt(prompt("Enter the second integer"));

  console.log(`${a} + ${b} = ${a + b}`);
  console.log(`${a} - ${b} = ${a - b}`);
  console.log(`${a} * ${b} = ${a * b}`);
  console.log(`${a} / ${b} = ${Math.floor(a / b)}`); // truncates towards 0
  console.log(`${a} % ${b} = ${a % b}`); // remainder is always positive
  // no exponentiation operator
}
main();
