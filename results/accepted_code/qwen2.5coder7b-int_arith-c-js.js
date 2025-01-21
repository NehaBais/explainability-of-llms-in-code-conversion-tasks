function calculate(num1, num2) {
  let sum = num1 + num2;
  let difference = num1 - num2;
  let product = num1 * num2;
  let quotient = Math.floor(num1 / num2); // rounds towards zero
  let remainder = num1 % num2; // same sign as the first operand

  console.log("a+b =", sum);
  console.log("a-b =", difference);
  console.log("a*b =", product);
  console.log("a/b =", quotient);
  console.log("a%b =", remainder);

  let exponentiation = Math.pow(num1, num2);
  console.log("a^b =", exponentiation);
}

let a = parseInt(prompt("Enter first number"));
let b = parseInt(prompt("Enter second number"));

calculate(a, b);
