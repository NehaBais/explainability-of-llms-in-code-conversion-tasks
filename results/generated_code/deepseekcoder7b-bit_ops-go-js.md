The JavaScript equivalent of the provided Golang code would look something like this:

```javascript
function bitwise(a, b) {
    console.log("a:   " + a.toString(2).padStart(16, '0'));
    console.log("b:   " + b.toString(2).padStart(16, '0'));
    
    // Bitwise logical operations
    console.log("and: " + ((a & b)).toString(2).padStart(16, '0'));
    console.log("or:  " + ((a | b)).toString(2).padStart(16, '0'));
    console.log("xor: " + ((a ^ b)).toString(2).padStart(16, '0'));
    
    // Bitwise NOT operation is done differently in JS
    console.log("not: " + (~a & 0xffff).toString(2).padStart(16, '0'));
  
    if(b < 0) {
        console.log("Right operand is negative, but all shifts require an unsigned right operand (shift distance).");
        return;
    }
    
    // Logical shifts 
    console.log("shl: " + ((a << b)).toString(2).padStart(16, '0'));
    console.log("shr: " + ((a >> b)).toString(2).padStart<｜begin▁of▁sentence｜>(16, '0'));
    
    // Arithmetic shifts in JS done slightly differently than in Golang
    let ua = a >>> 0;   // convert to unsigned integer
    console.log("las: " + ((ua << b)).toString(2).padStart(16, '0'));
    console.log("ras: " + ((ua >> b)).toString(2).padStart(16, '0'));
    
    // Rotations in JS done differently than in Golang 
    console.log("rol: " + (((a << b) | (ua >> (16 - b))).toString(2).padStart(16, '0')));
    console.log("ror: " + ((ua >> b | a << (16 - b)).toString(2).padStart(16, '0'));
}

let a = -460; 
let b = 6;
bitwise(a, b);
```
In JS, we use `~` to represent Bitwise NOT operation and `>>>` for Arithmetic right shift which in Golang is done using `>>`. The padStart method was used here to keep the bit representation of each number as 16 bits, padding with zeros if necessary.

