 Here is the JavaScript version of your Golang code:

```JavaScript
const readline = require('readline').createInterface({
  input: process.stdin,
  output: process.stdout
});

let n1, n2;

console.log("Enter number:");
readline.question('', (answer) => { n1 = Number(answer); readLine.close(); compare() });

function compare(){
    console.log("Enter number:");
    readline.question('', (answer) => { n2 = Number(answer); compareNumbers() });
}

function compareNumbers(){
    switch(true){
        case n1 < n2: 
            console.log(n1, "less than", n2);
            break;
        case n1 == n2: 
            console.log(n1, "equal to", n2);
            break;
        case n1 > n2: 
            console.log(n1, "greater than", n2);
    }
}
```
