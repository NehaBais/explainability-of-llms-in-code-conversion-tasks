 Here is the JavaScript version of your Golang code:

```JavaScript
function bitwise(a, b) {
    // Bitwise logical operations
    console.log("a:   ", a.toString(2).padStart(16,'0'));
    console.log("b:   ", b.toString(2).padStart(16,'0'));
    console.log("and: ", (a&b).toString(2).padStart(16,'0'));
    console.log("or:  ", (a|b).toString(2).padStart(16,'0'));
    console.log("xor: ", (a^b).toString(2).padStart(16,'0'));
    console.log("not: ", ~a);
    
    if (b < 0) {
        console.log('Right operand is negative, but all shifts require an unsigned right operand (shift distance).');
        return;
    }
    
    let ua = a >>> 0;
    let ub = b >>> 0;
    
    // Logical shifts (unsigned left operand)
    console.log("shl: ", (ua<<ub).toString(2).padStart(16,'0'));
    console.log("shr: ", (ua>>>ub).toString(2).padStart(16,'0'));
    
    // Arithmetic shifts (signed left operand)
    console.log("las: ", (a<<ub).toString(2).padStart(16,'0'));
    console.log("ras: ", (a>>>ub).toString(2).padStart(16,'0'));
    
    // Rotations
    let rol = ((a<<ub)|((a>>>(16-ub))&(~(-1)^(ub-1)))).toString(2).padStart(16,'0');
    let ror = (((a>>>ub)&a)<<(16-ub)).toString(2).padStart(16,'0');
    
    console.log("rol: ", rol);
    console.log("ror: ", ror);
}

let a, b = -460, 6;
bitwise(a, b);
```
This JavaScript function performs the same operations as your Golang function. The `padStart` method is used to ensure that all binary numbers have the same length by adding leading zeros. 
The `~` operator is equivalent to bitwise NOT in both languages. 
`>>>` (zero-fill right shift) and `<<` (left shift) are also equivalent, but they handle overflow differently.
For arithmetic shifts, we take advantage of JavaScript's ability to perform bitwise shifts on 32-bit integers and then mask the upper bits back in afterward.
