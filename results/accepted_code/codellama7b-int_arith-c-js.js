// get two integers from the user
let a = prompt("Enter first integer");
let b = prompt("Enter second integer");

// validate input
if (a === null || b === null) {
  console.log("Invalid input. Please enter two integers.");
  return;
}

// perform operations
console.log(`a+b = ${a + b}`);
console.log(`a-b = ${a - b}`);
console.log(`a*b = ${a * b}`);
console.log(`a/b = ${Math.trunc(a / b)}`);
console.log(`a%b = ${a % b}`);
