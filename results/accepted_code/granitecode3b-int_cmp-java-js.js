// Get two integers from the user
let nbr1 = parseInt(prompt("Enter the first integer"));
let nbr2 = parseInt(prompt("Enter the second integer"));

// Display a message based on the comparison of the integers
if (nbr1 < nbr2) {
  console.log(`${nbr1} is less than ${nbr2}`);
} else if (nbr1 > nbr2) {
  console.log(`${nbr1} is greater than ${nbr2}`);
} else {
  console.log(`${nbr1} is equal to ${nbr2}`);
}
