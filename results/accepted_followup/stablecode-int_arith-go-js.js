const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
}));


rl.question('enter two integers: ', (a) => {
    let b;
    rl.question('enter second integer: ', (input) => {
        b = parseInt(input);
        console.log(`${a} 
+ ${b} 
= ${parseInt(a)+parseInt(b)}`);
        console.log(`${a} 
- ${b} 
= ${parseInt(a)-parseInt(b)}`);
        console.log(`${a} 
* ${b} 
= ${parseInt(a) * parseInt(b)}`);
        if (parseInt(a) > 0 && parseInt(b) > 0){
            console.log(`${a} 
/ ${b} 
= ${Math.trunc(parseInt(a)/parseInt(b)))}`);  // truncates towards 0 
        }

        let remainder;
        if (parseInt(a) < 0 && parseInt(b) > 0){
            remainder = Math.abs(parseInt(a) % parseInt(b))); // same sign as first operand if they are different
        } else {
          console.log("No remainder operator");
        }

        // no exponentiation operator

        rl.close();
    });
});