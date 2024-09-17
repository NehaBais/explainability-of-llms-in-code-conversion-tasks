let rl = require("readline").createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("enter number: ", function (n1) {
  rl.question("enter number: ", function (n2) {
    n1 = parseInt(n1);
    n2 = parseInt(n2);

    if (n1 < n2) {
      console.log(`${n1} less than ${n2}`);
    } else if (n1 === n2) {
      console.log(`${n1} equal to ${n2}`);
    } else {
      console.log(`${n1} greater than ${n2}`);
    }
    rl.close();
  });
});
