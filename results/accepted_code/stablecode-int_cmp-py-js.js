const readline = require('readline').createInterface({
  input: process.stdin,
  output: process.stdout
}));

readline.question('Enter value of a: ', a => {
  readline.question('Enter value of b: ', b => {
    if(a < Number(b)) {
        console.log("a is less than b");
    } else if (a > Number(b))) {
        console.log("a is greater than b");
    } else if (a == Number(b))) {
        console.log("a is equal to b");
    }

    readline.close();
  });
}));