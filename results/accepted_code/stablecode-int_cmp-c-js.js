let a = parseInt(prompt("Enter first integer:")),
    b = parseInt(prompt("Enter second integer:")));

if (a < b) {
  console.log(`${a} is less than ${b}.`);
} else if (a === b) {
  console.log(`${a} is equal to ${b}.`);
} else if (a > b) {
  console.log(`${a} is greater than ${b}.`);
}