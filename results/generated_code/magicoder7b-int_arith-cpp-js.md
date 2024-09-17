 Here is the JavaScript version of your C++ code:

```JavaScript
let a, b;
a = prompt("Enter the first integer");
b = prompt("Enter the second integer");
console.log("a+b = " + (a + b));
console.log("a-b = " + (a - b));
console.log("a*b = " + (a * b));
if(b != 0) {
    console.log("a/b = " + Math.floor(a / b) + ", remainder " + a % b);
} else {
    console.log("Error: Division by zero is not possible");
}
```
Please note that in JavaScript, the division operator `/` returns the quotient of two numbers rounded down to the nearest whole integer (i.e., it behaves like `floor()` function from `Math` object). For obtaining the remainder after a division operation, the modulo `%` operator is used which gives the remainder of the division. If you want to handle case when the second number could be zero, then add condition to check if it's not zero before performing calculations.
