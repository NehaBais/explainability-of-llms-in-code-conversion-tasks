The error is occurring because there's an unexpected token ')' in the given JavaScript code. 

To fix this issue, we need to ensure that every opening bracket ('(')) has a corresponding closing bracket (')')) at the same nesting level.

Here is the corrected code:

```js
function bitwise(a, b) {
    console.log(`a AND b: ${(a & b)}`);
    console.log(`a OR b: ${((a | b))}}`);
    console.log(`a XOR b: ${((a ^ b))}}`);
    console.log(`NOT a: ${(~a))}}`);

    if (b >= 0) {
        console.log(`${a} rol ${b}`: `${Number.isInteger(b) ? Integer.rotateLeft(a, b) : 'Invalid Shift Amount'}`); 
    // rotate left, JavaScript 1.5+
    } else {
        let temp = Math.abs(b);
        console.log(`${a} >> ${temp}`: `${Number.isInteger(b) ? a >> temp : 'Invalid Shift Amount'}`); 
        console.log(`${a} >>> ${temp}`: `${Number.isInteger(b) && Number.isFinite(b) ? a >>> temp : 'Invalid Shift Amount'}`); 
    // logical right shift, JavaScript 1.5+
    }

    if (b >= 0) {
        console.log(`${a} rol ${b}`: `${Number.isInteger(b) ? Integer.rotateLeft(a, b) : 'Invalid Shift Amount'}`); 
    // rotate left, JavaScript 1.5+
    } else {
        let temp = Math.abs(b);
        console.log(`${a} >> ${temp}`: `${Number.isInteger(b) && Number.isFinite(b) ? a >> temp : 'Invalid Shift Amount'}`); 
        console.log(`${a} >>> ${temp}`: `${Number.isInteger(b) && Number.isFinite(b) ? a >>> temp : 'Invalid Shift Amount'}`); 
    // logical right shift, JavaScript 1.5+
    }

    console.log(); // just for aesthetics, to separate each operation from the previous one
}
```
