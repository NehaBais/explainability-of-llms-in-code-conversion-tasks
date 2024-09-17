Here is the equivalent JavaScript code:

```javascript
let readline = require('readline-sync');

let n1 = parseInt(readline.question('Enter first number: '));
let n2 = parseInt(readline.question('Enter second number: '));

if(n1 < n2) {
    console.log(n1 + " less than " + n2);
} else if (n1 === n2){
    console.log(n1 + " equal to " + n2);
} else {
    console.log(n1 + " greater than " + n2);
}
```

This JavaScript code prompts the user for two numbers and then compares them using if-else statements. The `readline-sync` package is used to obtain input from the user in a synchronous manner, similar to how `fmt.Scan` was used in Golang.
