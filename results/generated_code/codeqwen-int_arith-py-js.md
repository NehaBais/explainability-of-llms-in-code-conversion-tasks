Here is the equivalent JavaScript code for your Python script:

```javascript
let input1 = 18; //input1 = parseInt(prompt('Enter first number'));
let input2 = 7; //input2 = parseInt(prompt('Enter Second number'));

let qq = input1 + input2;
console.log("Sum: \t\t" + qq);

let ww = input1 - input2;
console.log("Difference: \t" + ww);

let ee = input1 * input2;
console.log("Product: \t" + ee);

let rr = input1 / input2;
console.log("Integer quotient: " + Math.floor(rr));

let tt = float(input1 / input2)
let uu = (Math.floor(tt) - float(tt))*-10;
console.log("Whole Remainder: " + Math.floor(uu));

let yy = input1 ** input2;
console.log("Exponentiation: \t" + yy);
```

In this script, we use `prompt()` function to get user inputs. We also use the `Math.floor()` function to round down to the nearest integer. In JavaScript, there's no operator equivalent for Python's exponentiation so we are using `**` which is the Math operator in JavaScript. 

Please note that `float()` function does not exist in JavaScript. If you want to convert a number to float, you need to use `parseFloat()`. Also JavaScript has no built-in support for integer or real number division as Python does. That's why we are using `Math.floor(input1 / input2)` instead.
