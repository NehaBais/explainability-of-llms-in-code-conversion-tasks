```javascript
function main() {
    let a = prompt('Enter two integers: ');
    let b = prompt('Enter the second integer: ');

    let sum = parseInt(a) + parseInt(b);
    let difference = parseInt(a) - parseInt(b);
    let product = parseInt(a) * parseInt(b);
    
    // Truncate towards 0
    let quotient = Math.floor(parseInt(a) / parseInt(b));
    
    // Remainder (same sign as first operand)
    let remainder = parseInt(a) % parseInt(b);

    console.log(`${a} + ${b} = ${sum}`);
    console.log(`${a} - ${b} = ${difference}`);
    console.log(`${a} * ${b} = ${product}`);
    console.log(`${a} / ${b} = ${quotient}`);
    console.log(`${a} % ${b} = ${remainder}`);
}
```
In the JavaScript version of this code, a prompt function is used to receive user input from the terminal. The parseInt function converts user input strings into integers for mathematical operations. The Math.floor() function is used for truncating towards 0 in the quotient calculation, and the % operator is also used for calculating the remainder.
