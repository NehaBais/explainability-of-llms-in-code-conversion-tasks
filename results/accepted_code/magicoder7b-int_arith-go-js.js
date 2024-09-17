const readline = require("readline").createInterface({
  input: process.stdin,
  output: process.stdout,
});

let a, b;

console.log("Enter two integers:");

readline.question("a: ", (answer) => {
  a = parseInt(answer);
  readline.question("b: ", (answer) => {
    b = parseInt(answer);
    console.log(`${a} + ${b} = ${a + b}`);
    console.log(`${a} - ${b} = ${a - b}`);
    console.log(`${a} * ${b} = ${a * b}`);
    // javascript's "/" operator behaves differently from golang's / operator, truncating towards 0 by default, which is different than Golang's behavior (it rounds towards zero or to negative infinity)
    console.log(`${a} / ${b} = ${Math.trunc(a / b)}`);
    // The "%" operator in JavaScript behaves differently from Golang's %, it always returns a number with the same sign as the first operand, regardless of whether they are different signs or not.
    console.log(`${a} %% ${b} = ${Math.abs(a % b)}`);
  });
});
