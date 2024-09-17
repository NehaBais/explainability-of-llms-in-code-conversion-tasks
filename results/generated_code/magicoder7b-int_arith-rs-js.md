 In JavaScript, you can use the prompt() function to get integers from user input. Here's how you can implement this in JavaScript with similar behavior as your Rust code:

```javascript
function main() {
    let a = parseInt(prompt("Enter first number: "));
    let b = parseInt(prompt("Enter second number: "));
    
    console.log("sum:              " + (a + b));
    console.log("difference:       " + (a - b));
    console.log("product:          " + (a * b));
    console.log("integer quotient: " + Math.floor(a / b)); // rounds towards zero
    console.log("remainder:        " + (a % b < 0 ? -b % a : b % a)); // positive if same sign or zero
}
```
Note that there's no exponentiation operator in JavaScript, but you can manually calculate it using the Math.pow() function:

```javascript
let power = Math.pow(a, b); 
console.log(`Exponentiation (${b} to the power of ${a}): ` + power);
```
