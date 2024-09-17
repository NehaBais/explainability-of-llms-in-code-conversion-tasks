Here is the equivalent JavaScript code for the given Java routine:

```javascript
function bitwise(a, b) {
    console.log("a AND b: " + (a & b)));
    console.log("a OR b: " + ((a | b))));
    console.log("a XOR b: " + ((a ^ b))));
    console.log("NOT a: " + (~a))));

    if(b >= 0){
        console.log("a << b: " + ((a << b))));  // left shift
    } else {
        let temp = Math.abs(b);
        console.log(`a >> ${temp}`: ' + ((a >>> temp))))); // arithmetic right shift
        console.log(`a >>> ${temp}`: ' + ((a >>> temp))))); // logical right shift
    }

    if(b >= 0){
        console.log(`${a} rol ${b}`: ' + (Number.isInteger(b) ? Integer.rotateLeft(a, b) : 'Invalid Shift Amount')))); 
// rotate left, JavaScript 1.5+
        console.log(`${a} ror ${b}`: ' + (Number.isInteger(b) ? Integer.rotateRight(a, b) : 'Invalid Shift Amount'))))); // rotate right, JavaScript 1.5+
    } else {
        let temp = Math.abs(b);
        console.log(`${a} >> ${temp}`: ' + ((Number.isInteger(b) && Number.isFinite(b)) ? a >> temp : 'Invalid Shift Amount')))); // arithmetic right shift
        console.log(`${a} >>> ${temp}`: ' + ((Number.isInteger(b) && Number.isFinite(b)) ? a >>> temp : 'Invalid Shift Amount')))); // logical right shift
    }

    console.log(); // just for aesthetics, to separate each operation from the previous one
}
```

This JavaScript code performs bitwise operations on two integers (a and b). It includes operations such as AND, OR, XOR, NOT, left shift, arithmetic right shift, logical right shift, rotate left, and rotate right. The shifts/rotates are done on the first integer 'a' with a shift/rotate amount of the second integer 'b'.
