Here's the JavaScript code that meets your requirements:
```
var input1 = 18;
var input2 = 7;
var qq = input1 + input2;
console.log("Sum: 		  " + qq);
var ww = input1 - input2;
console.log("Difference: 	  " + ww);
var ee = input1 * input2;
console.log("Product: 	  " + ee);
var rr = input1 / input2;
console.log("Integer quotient: " + Math.floor(rr));
console.log("Float quotient:   " + rr);
var tt = input1 / input2;
varuu = (Math.sign(tt) === -1 ? -1 : 1)*Math.floor(Math.abs(tt)-Math.floor(Math.abs(tt)));
console.log("Whole Remainder:  " + Math.floor(rr));
console.log("Actual Remainder: " +uu);
var yy = Math.pow(input1, input2);
console.log("Exponentiation:   " + yy);
```
Note that in JavaScript, the `//` operator is used for integer division, while the `/` operator returns a float. The `Math.sign()` function returns -1 if the argument is negative, 0 if it's zero, and 1 if it's positive. The `Math.floor()` function rounds down to the nearest integer, while the `Math.abs()` function returns the absolute value of the input.

