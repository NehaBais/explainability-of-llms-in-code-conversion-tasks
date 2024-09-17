 Here is the converted code in JavaScript:
```
// get two integers from the user
let a = prompt("Enter first integer");
let b = prompt("Enter second integer");

// validate input
if (a === null || b === null) {
  console.log("Invalid input. Please enter two integers.");
  return;
}

// perform operations
console.log(`a+b = ${a + b}`);
console.log(`a-b = ${a - b}`);
console.log(`a*b = ${a * b}`);
console.log(`a/b = ${Math.trunc(a / b)}`);
console.log(`a%b = ${a % b}`);
```
Note that in JavaScript, the `prompt()` function is used to get input from the user, and the `%` operator is used for modulo operation instead of `/`. Additionally, in JavaScript, we use the `Math.trunc()` method to perform integer division and truncate towards zero, which is the same behavior as C99. Finally, we use the same sign convention as C99 for the remainder operation, where the remainder has the same sign as the first operand if they are different.
