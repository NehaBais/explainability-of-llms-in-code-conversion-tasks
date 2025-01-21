 Here's the JavaScript equivalent of your C++ code, which reads two integers from the user and performs the required arithmetic operations:

```javascript
process.stdin.setEncoding('utf8');

console.log("Please enter two integers:");
process.stdin.on('data', (chunk) => {
  const [a, b] = chunk.split(' ').map(Number);
  
  console.log(`a+b = ${a + b}`);
  console.log(`a-b = ${a - b}`);
  console.log(`a*b = ${a * b}`);
  
  // For quotient and remainder, consider the specific behavior for JavaScript's '/' and '%' operators
  const quotient = Math.floor(a / b); // Rounds towards negative infinity
  const remainder = a % b;
  console.log(`a/b = ${quotient}, remainder ${remainder}`);
  
  process.exit();
});
```

This script sets up an event listener to read the input from stdin, processes it to extract two integers, and then performs the arithmetic operations as specified in your C++ code. Note that JavaScript's `/` operator for division always rounds towards zero (which is equivalent to rounding towards negative infinity for non-zero divisors), and `%` returns the remainder of integer division, with the sign of the remainder matching that of the dividend if they are different signs.
