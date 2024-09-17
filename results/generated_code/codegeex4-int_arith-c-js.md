Here is the equivalent JavaScript code:

```javascript
function calculateOperations(a, b) {
    console.log(`Sum: ${a + b}`);
    console.log(`Difference: ${a - b}`);
    console.log(`Product: ${a * b}`);
    console.log(`Integer Quotient: ${Math.floor(a / b)}`); // truncates towards 0
    console.log(`Remainder: ${a % b}`); // same sign as first operand if they are different

    try {
        console.log(`Exponentiation: ${Math.pow(a, b)}`);
    } catch (error) {
        console.error('Exponentiation operation is not supported in this environment.');
    }
}

// Sample usage:
calculateOperations(10, 3);
```

Note that for the `Exponentiation` part, JavaScript doesn't have a specific operator like C/C++. Instead, it uses the built-in `Math.pow()` function. This function will return NaN if one or both of the arguments is not a number.

Also note that in JavaScript, the result of division operation `/` truncates towards zero when dealing with positive numbers but rounds to nearest integer when the result is negative (same as rounding towards -infinity). The `%` operator also works the same way in JavaScript.
