Here is the JavaScript version of your Python code. Note that Javascript does not have an exponentiation operator (**), so I used the Math library's pow method instead. Also note that Javascript does not have a built-in function to get actual remainder after division (like python's %), but there are ways around it.
```javascript
let input1 = 18; // prompt() can be used for user input in browsers
let input2 = 7;  // prompt() can be used for user input in browsers

let qq = input1 + input2;
console.log("Sum: " + qq);

let ww = input1 - input2;
console.log("Difference: " + ww);

let ee = input1 * input2;
console.log("Product: " + ee);

// Javascript performs division towards zero for integer quotient.
let rr = Math.trunc(input1 / input2); 
console.log("Integer quotient: " + rr);

let tt = input1 / input2;
tt = parseInt(tt) - tt;
tt *= 10;
console.log("Whole Remainder: " + Math.trunc(tt));
console.log("Actual Remainder: " + tt);

let yy = Math.pow(input1, input2);
console.log("Exponentiation: " + yy);
```
