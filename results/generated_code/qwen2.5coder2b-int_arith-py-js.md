Sure, here is the JavaScript equivalent of your Python code:

```javascript
let input1 = 18; // You can comment out this line to use user input
// let input1 = prompt("Enter first integer:");
let input2 = 7;  // You can comment out this line to use user input
// let input2 = prompt("Enter second integer:");

qq = input1 + input2;
console.log("Sum: ", qq);

ww = input1 - input2;
console.log("Difference: ", ww);

ee = input1 * input2;
console.log("Product: ", ee);

rr = Math.floor(input1 / input2); // Math.floor rounds towards zero
console.log("Integer quotient: ", rr);
console.log("Float quotient: ", parseFloat(rr));

tt = parseFloat(input1 / input2);
uu = (Math.floor(tt) - tt)*-10;
console.log("Whole Remainder: ", uu);

console.log("Actual Remainder: ", uu);

yy = Math.pow(input1, input2);
console.log("Exponentiation: ", yy);
```

If you run this code and provide integers as inputs, it will compute the sum, difference, product, integer quotient, float quotient, whole remainder, actual remainder, and exponentiation for those two integers.
