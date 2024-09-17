Here is the JavaScript version of your code. In this code, we have used NodeJS built-in `process` object to get input from command line arguments. If you are running this in a browser it won't work as expected because there's no equivalent way to read command-line inputs in web-based JavaScript environments:

```javascript
let a = parseInt(process.argv[2]);
let b = parseInt(process.argv[3]);
console.log("a+b=" + (a+b));  //sum
console.log("a-b=" + (a-b));  //difference
console.log("a*b=" + (a*b));  //product
if(b != 0){
    console.log("a/b=" + Math.floor(a/b));//integer quotient
    if((a ^ b) < 0 ) {
        console.log("Remainder has negative sign");
    } else{
        console.log("Remainder has positive or zero sign");
    }
    
} 
console.log("Exponentiation=" + Math.pow(a,b)); //exponentiation
```
This JavaScript code performs the same operations as your C code with a few differences:
- To parse an integer from string in JavaScript, we use `parseInt()` function instead of `atoi()`.
- We have used console log for output instead of printf(). 
- In division operation, we are using Math object's floor method to round towards zero if operands are negative.
- The modulo (remainder) is performed by '^', but it doesn’t match the sign of first or second operand in C. We would need a custom function for that. 
- For exponentiation, we use `Math.pow(a, b);`.

