```
var input1 = prompt("Enter a number: ", 18);
// var input1 = parseInt(prompt("Enter a number: "));
var input2 = prompt("Enter another number: ", 7);
// var input2 = parseInt(prompt("Enter another number: "));

var qq = input1 + input2;
console.log("Sum: " + qq);

var ww = input1 - input2;
console.log("Difference: " + ww);

var ee = input1 * input2;
console.log("Product: " + ee);

var rr = input1 / input2;
console.log("Integer quotient: " + Math.floor(rr));
console.log("Float quotient: " + rr);

var tt = input1 / input2;
var uu = (tt % 1) * -10;
// var uu = (Math.round(tt) - tt) * -10;
console.log("Whole Remainder: " + Math.floor(uu));
console.log("Actual Remainder: " + uu);

var yy = input1 ** input2;
console.log("Exponentiation: " + yy);
```
In the above code, we have used JavaScript's `prompt()` function to get input from the user and store it in variables `input1` and `input2`. We have also used the `Math.floor()` method to perform integer division and find the whole remainder, as well as the `%` operator to calculate the actual remainder.

Note that we have used `parseInt()` function to convert input from strings to integers for better calculation results. Also, we have used `**` operator for exponentiation instead of `Math.pow()` method as it is more concise and easy to use.
