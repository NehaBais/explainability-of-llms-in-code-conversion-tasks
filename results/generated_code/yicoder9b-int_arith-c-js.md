In JavaScript there is no direct equivalent to the argv[] and argc that are used in C. However you could use process.argv to get command line arguments similar to argv[]. Also, JavaScript does not have a built-in exponentiation operator, so we need to use Math.pow() for this operation. Here's how you can convert your code from C to JavaScript:
```JavaScript
var a = parseInt(process.argv[2]);
var b = parseInt(process.argv[3]);

if (isNaN(a) || isNaN(b)) {
    console.error('Please provide two valid integers');
    process.exit(1);
}

if (b === 0) {
    console.error('Division by zero error!');
    process.exit(2);
}

console.log(`a+b = ${a+b}`);
console.log(`a-b = ${a-b}`);
console.log(`a*b = ${a*b}`);
console.log(`a/b = ${Math.trunc(a/b)}`); // Always truncates towards zero in JavaScript
console.log(`a%b = ${((a % b) + b) % b}`); // Same sign as first operand, but not same behaviour for negative numbers
console.log(`Math.pow(a, b) = ${Math.pow(a, b)}`); 
```
This code expects two command line arguments when you run it with Node.js to act as the values of a and b respectively. It will display each of their operations just like in your C code but will also handle error cases gracefully by checking if the inputs are valid integers and if division by zero would be attempted. For the modulus operation, there is no direct match for the C99 behaviour where it matches the sign of the first operand. The provided solution matches the sign of a.
