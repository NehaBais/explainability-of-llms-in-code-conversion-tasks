let num1 = parseInt(prompt("Enter first integer"));
let num2 = parseInt(prompt("Enter second integer"));

if (num1 < num2) {
  console.log(num1 + " is less than " + num2);
} else if (num1 > num2) {
  console.log(num1 + " is greater than " + num2);
} else {
  console.log(num1 + " is equal to " + num2);
}
