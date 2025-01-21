```javascript
function getTwoNumbers() {
    const readlineSync = require('readline-sync');
    return readlineSync.questionInt('Enter the first integer: '), 
           readlineSync.questionInt('Enter the second integer: ');
}

function performArithmeticOperations(a, b) {
    console.log(`a + b = ${a + b}`);
    console.log(`a - b = ${a - b}`);
    console.log(`a * b = ${a * b}`);
    console.log(`quotient of a / b = ${Math.trunc(a / b)} (truncated towards 0)`);
    console.log(`remainder of a / b = ${a % b} (same sign as first operand, if they are different)`);
}

function main() {
    const [num1, num2] = getTwoNumbers();
    performArithmeticOperations(num1, num2);
}

main();
```

Explanation:
- **import readlineSync**: This is used for reading integers from the command line.
- `getTwoNumbers`: This function prompts the user to enter two integers and returns them as an array of numbers.
- `performArithmeticOperations`: This function takes the two integers as arguments and prints out their arithmetic operations. Note that `Math.trunc()` is used to truncate towards 0, which means it rounds down to the nearest integer without rounding up or down, similar to Java's truncation for integer division.
- `main`: This function orchestrates the entire process by calling `getTwoNumbers` and `performArithmeticOperations`.
