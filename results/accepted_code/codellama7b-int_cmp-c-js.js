let userInput = prompt("Enter two integers");
let [a, b] = userInput.split(" ").map((x) => parseInt(x));

if (a < b) {
  console.log(`${a} is less than ${b}`);
} else if (a == b) {
  console.log(`${a} is equal to ${b}`);
} else if (a > b) {
  console.log(`${a} is greater than ${b}`);
}
