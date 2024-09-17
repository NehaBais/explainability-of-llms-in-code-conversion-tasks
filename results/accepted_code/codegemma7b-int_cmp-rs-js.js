const reader = require("readline").createInterface({
  input: process.stdin,
  output: process.stdout,
});

reader.question("Enter the first integer: ", (a) => {
  reader.question("Enter the second integer: ", (b) => {
    a = parseInt(a);
    b = parseInt(b);

    if (a < b) {
      console.log(`${a} is less than ${b}`);
    } else if (a === b) {
      console.log(`${a} equals ${b}`);
    } else {
      console.log(`${a} is greater than ${b}`);
    }

    reader.close();
  });
});
