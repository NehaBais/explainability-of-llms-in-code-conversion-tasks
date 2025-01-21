function main() {
  let a = prompt("Enter two integers: ");
  let b = prompt("Enter the second integer: ");

  let sum = parseInt(a) + parseInt(b);
  let difference = parseInt(a) - parseInt(b);
  let product = parseInt(a) * parseInt(b);

  // Truncate towards 0
  let quotient = Math.floor(parseInt(a) / parseInt(b));

  // Remainder (same sign as first operand)
  let remainder = parseInt(a) % parseInt(b);

  console.log(`${a} + ${b} = ${sum}`);
  console.log(`${a} - ${b} = ${difference}`);
  console.log(`${a} * ${b} = ${product}`);
  console.log(`${a} / ${b} = ${quotient}`);
  console.log(`${a} % ${b} = ${remainder}`);
}
