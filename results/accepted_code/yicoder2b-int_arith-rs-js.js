const readline = require("readline").createInterface({
  input: process.stdin,
  output: process.stdout,
});

readline.question("Please enter the first number: ", function (a) {
  let num1 = parseInt(a);

  readline.question("Please enter the second number: ", function (b) {
    let num2 = parseInt(b);

    console.log(`sum:              ${num1 + num2}`);
    console.log(`difference:       ${num1 - num2}`);
    console.log(`product:          ${num1 * num2}`);
    // truncates towards zero (essentially rounds towards negative infinity)
    console.log(`integer quotient: ${Math.floor(num1 / num2)}`);
    // if the remainder of a/b is positive or negative, it's the same as b
    console.log(`remainder:        ${num1 % num2}`);

    readline.close();
  });
});
