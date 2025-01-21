Here is the equivalent JavaScript code for your requirement:

```javascript
function bitwise(a, b) {
    console.log('a AND b: ' + (a & b));
    console.log('a OR b: ' + (a | b));
    console.log('a XOR b: ' + (a ^ b));
    console.log('NOT a: ' + ~a);
    
    var shiftedLeft = a << b;
    console.log('a << b: ' + shiftedLeft);

    var shiftedRightArithmetic = a >> b;
    console.log('a >> b: ' + shiftedRightArithmetic);

    var shiftedRightLogical = a >>> b;
    console.log('a >>> b: ' + shiftedRightLogical);
    
    // JavaScript does not have built-in methods for bit rotation. We need to create custom functions.
    var rotatedLeft = (a << b) | (a >> (32 - b));  // Assuming 32-bit integers
    console.log('a rol b: ' + rotatedLeft);

    var rotatedRight = (a >> b) | (a << (32 - b)); // Assuming 32-bit integers
    console.log('a ror b: ' + rotatedRight);
}
```
Please note that JavaScript does not have a built-in method for bit rotation, so we need to create custom functions as shown above. These functions assume a 32-bit integer size. The bitwise NOT operation `~` works the same in both Java and JavaScript.

Also, JavaScript uses 53-bit floating point numbers which can be used to represent integers. If you want to work with truly 32-bit integers, you might need an additional library such as `big-integer` or a custom solution using bitwise operations to simulate a 32-bit integer.
