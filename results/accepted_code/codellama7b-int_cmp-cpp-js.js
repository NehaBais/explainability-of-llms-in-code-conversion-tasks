let a, b; // Declare variables for two integers

// Get input from user
a = parseInt(prompt("Enter first integer:"));
b = parseInt(prompt("Enter second integer:"));

// Test for less-than
if (a < b) {
  console.log(`${a} is less than ${b}`);
}

// Test for equality
if (a == b) {
  console.log(`${a} is equal to ${b}`);
}

// Test for greater-than
if (a > b) {
  console.log(`${a} is greater than ${b}`);
}
