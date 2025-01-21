// Get two integers from the user
const [a, b] = prompt("Enter two integers: ").split(" ");

if (isNaN(a) || isNaN(b)) {
  console.error("Invalid input. Please enter numbers.");
  return;
}

// Test for less-than
if (a < b) {
  console.log(`${a} is less than ${b}`);
}

// Test for equality
if (a === b) {
  console.log(`${a} is equal to ${b}`);
}

// Test for greater-than
if (a > b) {
  console.log(`${a} is greater than ${b}`);
}
