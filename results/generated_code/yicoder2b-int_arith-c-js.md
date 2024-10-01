This is how you can convert the given code from C to JavaScript:

```javascript
// Include the built-in math library to use its functions like abs, pow etc.
const {abs, pow} = Math;

function main(args) {
    if (!Array.isArray(args)) return 1; // Exit if input is not an array.
    let a = parseInt(args[--args.length]);
    let b = parseInt(args[--args.length]);
    // Check if both numbers are defined and if they aren't zero.
    if (isNaN(a) || isNaN(b) || a == 0 || b == 0) return 2; // Exit if either number is zero.

    console.log(`a + b = ${a + b}`);
    console.log(`a - b = ${a - b}`);
    console.log(`a * b = ${a * b}`);
    let quotient = Math.floor(a / b), remainder = a % b; // Calculate the integer quotient and modulus.
    console.log(`a / b = ${quotient}`);
    if (remainder < 0 && Math.sign(a) == -1 || Math.sign(b) == -1) console.log(`a %% b = ${Math.abs(remainder)}`); // If the signs of the operands are different and their remainders are negative, then their remainder is the absolute value of the non-negative remainder.
    else console.log(`a %% b = ${remainder}`);
}

// Call main with command line arguments.
main(process.argv.slice(2)); 
```
