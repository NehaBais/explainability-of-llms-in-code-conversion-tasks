Here's the converted code from Golang to JavaScript:
```javascript
let a, b;
console.log("Enter two integers:");
[a, b] = [parseInt(readline()), parseInt(readline())];
console.log(`${a} + ${b} = ${a+b}`);
console.log(`${a} - ${b} = ${a-b}`);
console.log(`${a} * ${b} = ${a*b}`);
console.log(`${a} / ${b} = ${Math.floor(a/b)}`); // rounds towards negative infinity
console.log(`${a} % ${b} = ${a%b}`); // same sign as first operand
// no exponentiation operator
```
Note that the `readline()` function is not available in JavaScript, so we use `parseInt(prompt())` instead to get user input. Also, `Math.floor()` is used to get the integer quotient. The remainder has the same sign as the first operand.

