Here is the JavaScript equivalent of your Golang code:

```javascript
let rl = require("readline").createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("enter number: ", function(n1) {
    rl.question("enter number: ", function(n2){
        n1= parseInt(n1); 
        n2 = parseInt(n2);
        
        if (n1 < n2) {
            console.log(`${n1} less than ${n2}`);
        } else if (n1 === n2){
            console.log(`${n1} equal to ${n2}`);
        } else { 
            console.log(`${n1} greater than ${n2}`);
        }
       rl.close();  
    });
});
```
This JavaScript code uses the `readline` module of Node.js to read from stdin, and does not need error handling like your Go code because `rl.question()` will throw an exception if it fails. It also uses strict comparison (===) instead of loose comparison (==). 

Please ensure you have installed "readline" npm package before running this script. You can install using the command - `npm i readline-sync`.

