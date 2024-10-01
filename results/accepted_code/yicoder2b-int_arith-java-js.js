let readline = require("readline-sync"); // Import readline module to allow user input

function main() {
  // Get the 2 numbers from command line arguments
  var a = readline.questionInt("Enter first number: ");
  var b = readline.questionInt("Enter second number: ");

  let sum = a + b; // The result of adding 'a' and 'b' (Note: integer addition is discouraged in print statements due to confusion with string concatenation)
  let difference = a - b; // The result of subtracting 'b' from 'a'
  let product = a * b; // The result of multiplying 'a' and 'b'
  let quotient = Math.floor(a / b); // Uses floor division to indicate that the result truncates towards zero
  let remainder = a % b; // The remainder of dividing 'a' by 'b'

  console.log(`a + b = ${sum}`);
  console.log(`a - b = ${difference}`);
  console.log(`a * b = ${product}`);
  console.log(`quotient of a / b = ${quotient}`); // Indicates that the result truncates towards zero by using floor division
  console.log(`remainder of a / b = ${remainder}`); // Shows if it follows the same sign as 'a' or 'b'
}
main();
