The given C code is already written in JavaScript. Here's the code:

```javascript
let A = parseInt(process.argv[2]);
let b = parseInt(process.argv[3]);

console.log(`A+b = ${A + b}`);
console.log(`A-b = ${A - b}`);
console.log(`A*b = ${A * b}`);
console.log(`A/b = ${Math.floor(A / b)}`); // truncates towards 0 (in C99)
console.log(`A%b = ${A % b}`); // same sign as first operand (in C99)
```

In JavaScript, the Array `process.argv` is used to access command line arguments. Note that in this case we are assuming that the user input is provided using `node <filename>.js <integer> <integer>`.

Also note, we use `Math.floor()` function for integer division to match C99 behavior where it truncates towards 0. In JavaScript, `/` operator performs float division by default unlike C which performs integer division.
