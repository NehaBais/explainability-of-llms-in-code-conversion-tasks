const readline = require("readline").createInterface({
  input: process.stdin,
  output: process.stdout,
});
console.log("Enter first number:");
readline.on("line", (num1) => {
  console.log("Enter second number:");
  readline.on("line", (num2) => {
    num1 = parseInt(num1);
    num2 = parseInt(num2);
    if (isNaN(num1) || isNaN(num2)) {
      console.log("Please enter valid numbers.");
      return;
    }
    switch (true) {
      case num1 < num2:
        console.log(`${num1} is less than ${num2}`);
        break;
      case num1 == num2:
        console.log(`${num1} is equal to ${num2}`);
        break;
      case num1 > num2:
        console.log(`${num1} is greater than ${num2}`);
        break;
    }
    readline.close();
  });
});
