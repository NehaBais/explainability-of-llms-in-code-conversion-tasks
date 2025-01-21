Here is the JavaScript version of your code:

```javascript
function calculate(num1, num2) {
    let sum = num1 + num2;
    let difference = num1 - num2;
    let product = num1 * num2;
    let quotient = Math.floor(num1 / num2);  // rounds towards zero
    let remainder = num1 % num2;          // same sign as the first operand

    console.log("a+b =", sum);
    console.log("a-b =", difference);
    console.log("a*b =", product);
    console.log("a/b =", quotient);
    console.log("a%b =", remainder);

    let exponentiation = Math.pow(num1, num2);
    console.log("a^b =", exponentiation);
}

let a = parseInt(prompt('Enter first number'));
let b = parseInt(prompt('Enter second number'));

calculate(a, b);
```

You can run the function `calculate` with two integer numbers as parameters to see the output. The program gets two integers from the user using the `prompt()` function and then calls the `calculate` function with those values.

Please note that JavaScript doesn't support command-line arguments like C, so you'll need a way to get input from the user or mock it in your testing environment.
