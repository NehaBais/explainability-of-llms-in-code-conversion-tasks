Here is the JavaScript equivalent of your Python code:

```javascript
let input1 = 18;
// input1 = parseInt(prompt('Enter number 1'));
let input2 = 7;
// input2 = parseInt(prompt('Enter number 2'));

let qq = input1 + input2;
console.log("Sum:           " + qq);
let ww = input1 - input2;
console.log("Difference:     " + ww);
let ee = input1 * input2;
console.log("Product:        " + ee);
let rr = input1 / input2;
console.log("Integer quotient:  " + Math.floor(rr));
console.log("Float quotient:    " + parseFloat(rr));
let tt = (input1 / input2).toFixed(3) - 0;
console.log("Whole Remainder:   " + Math.round((tt * 10)));
console.log("Actual Remainder:  " + tt);
let yy = input1 ** input2;
console.log("Exponentiation:    " + yy);
```

The main differences between Python and JavaScript are:
- JavaScript does not have a built-in function to get user input (it uses `prompt()` instead of `input()`), so we need to manually retrieve the user's input from the console in this case.
- In JavaScript, division operator `/` returns a floating point number, which can cause precision issues if you're expecting an integer result and want to convert it to an integer. This is why we need to use `Math.floor()` or `parseInt()` to get a whole number from the quotient.
- The Python code uses `float(tt) * 10` to calculate the "whole" remainder, which is then rounded using `Math.round()`. In JavaScript, there's no built-in function for rounding, so you would need to convert back to floating point before calling `Math.round()` if you want a whole number result from `Math.floor(tt) * 10`.
- JavaScript uses the `**` operator for exponentiation instead of Python's `**`. 

Note that this is just a minimal translation, as some differences between Python and JavaScript are significant and would require more complex conversions to accurately translate your code. You may want to consult other resources or seek professional help for more comprehensive translations if you're dealing with more complex scenarios.
