// Declare variables and get numbers from user input
let num1 = prompt("Enter first number:");
let num2 = prompt("Enter second number:");
num1 = parseInt(num1);
num2 = parseInt(num2);

// Test for less than
if (num1 < num2) {
  console.log(`${num1} is less than ${num2}`);
}

// Test for equality
if (num1 == num2) {
  console.log(`${num1} is equal to ${num2}`);
}

// Test for greater than
if (num1 > num2) {
  console.log(`${num1} is greater than ${num2}`);
}
