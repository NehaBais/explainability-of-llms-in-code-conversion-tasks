Here is the JavaScript equivalent of your Golang code:

(Note that in JavaScript we use `+` for addition, subtraction etc., and `**` for exponentiation. Also note that division rounds towards 0 like in Go. For remainder with sign, we use a conditional (ternary) operator to check the signs.)

```javascript
let a = parseInt(prompt("Enter first integer:"));
let b = parseInt(prompt("Enter second integer:"));

console.log(`${a} + ${b} = ${a+b}`);
console.log(`${a} - ${b} = ${a-b}`);
console.log(`${a} * ${b} = ${a*b}`);
console.log(`${a} / ${b} = ${Math.floor(a/b)} (truncates towards zero)`);  // truncates towards zero
console.log(`${a} % ${b} = ${(a%b) === -((-a)%b)? a%b : ((a<0 && b>0)||(a>0&&b<0))? -((-a)%b): b%a } (same sign as first operand or of the second if they are different)`);
console.log(`${a} ** ${b} = ${Math.pow(a, b)}`); // exponentiation operator
```
This JavaScript code will achieve the same result in a web environment where you could use prompt() to get input from the user (like with an HTML page), but if running this on its own it would need some kind of external way to provide the inputs (like command-line arguments or stdin). 

The `parseInt` function is used to convert string inputs into numbers. For division, we use `Math.floor()` to simulate Golang's integer truncation behaviour and for exponentiation, JavaScript provides `Math.pow(a, b)` method.

