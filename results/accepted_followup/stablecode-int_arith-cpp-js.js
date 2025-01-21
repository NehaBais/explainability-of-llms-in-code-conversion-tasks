// Get two integers from the user
const readline = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
}));

readline.question("Enter two integers separated by space: ", (answer) => {

  var inputArray = answer.split(" ").map(Number);

  // Store the inputs in variables a and b
  var a = inputArray[0];
  var b = inputArray[1];


  // Display their sum
  console.log(`a+b = ${a + b}}`);

  // Display their difference
  console.log(`a-b = ${a - b}}`);

  // Display their product
  console.log(`a*b = ${a * b}}`);

  // Calculate and display integer quotient 
  // Round towards zero, e.g., 
  // 5 divided by 2 equals 2 (the integer quotient), with a remainder of 1 (which matches the sign of the first operand).
  console.log(`a/b = ${Math.trunc(a / b)}}`, `remainder ${a % b}`);

  readline.close();

});