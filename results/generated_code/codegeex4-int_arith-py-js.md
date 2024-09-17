Here is the JavaScript version of your Python code:

```javascript
let input1 = 18;
// input1 = prompt();
let input2 = 7;
// input2 = prompt();

let qq = input1 + input2;
console.log("Sum: "+qq);
let ww = input1 - input2;
console.log("Difference: "+ww);
let ee = input1 * input2;
console.log("Product: "+ee);
let rr = Math.floor(input1 / input2);
console.log("Integer quotient: "+rr);
console.log("Float quotient: "+(input1 / input2));
let tt = (input1 / input2).toFixed(10);
let uu = (Math.abs((parseInt(tt) - parseFloat(tt))*-10)).toFixed(10);
console.log("Whole Remainder: "+uu);
console.log("Actual Remainder: "+tt.substring(tt.length - 1, tt.length));
let yy = Math.pow(input1,input2);
console.log("Exponentiation: "+yy);
```

This JavaScript version uses the `prompt()` function to get input from users. However, for testing purposes, it is hardcoded with your values of 18 and 7.

Also note that JavaScript has no built-in operator for exponentiation so I used `Math.pow()`. The quotient in JavaScript is always rounded towards zero (also known as truncating towards zero), not towards negative infinity or any other rounding mode. The remainder operation matches the sign of the first operand, regardless of which operand is larger.

Finally, please note that you should wrap your code inside a try-catch block to handle potential errors when using `prompt()`. In this case, the error handling part was skipped according to your request.
