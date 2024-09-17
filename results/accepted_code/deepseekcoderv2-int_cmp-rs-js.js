const readline = require("readline");

// Create an interface for reading input from stdin
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

// Read two integers from the user using Promises
function getUserInput() {
  return new Promise((resolve) => {
    rl.question("Enter first number: ", (input1) => {
      rl.question("Enter second number: ", (input2) => {
        resolve([parseInt(input1), parseInt(input2)]);
      });
    });
  });
}

// Get user input and process it
async function main() {
  const [nums] = await getUserInput(); // Get the result of Promise.all with an array to retrieve multiple results from promises simultaneously (Promise.all)
  let a = nums[0];
  let b = nums[1];

  if (a < b) {
    console.log(`${a} is less than ${b}`);
  } else if (a === b) {
    console.log(`${a} equals ${b}`);
  } else {
    // Must be greater than
    console.log(`${a} is greater than ${b}`);
  }

  rl.close();
}

main().catch(console.error);
