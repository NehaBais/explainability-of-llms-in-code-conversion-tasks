 Here is the JavaScript version of your code. I've commented each conversion for clarity.

```JavaScript
function bitwise(a, b) {
    // Bitwise AND
    console.log("a and b: " + (a & b));
    
    // Bitwise OR
    console.log("a or b: " + (a | b));
    
    // Bitwise XOR
    console.log("a xor b: " + (a ^ b));
    
    // Bitwise NOT
    console.log("not a: " + ~a);
    
    // Left shift
    console.log("a << n: " + (a << b)); 
    
    // Arithmetic right shift on most platforms
    console.log("a >> n: " + (a >> b)); 
  
    /* Unsigned version of a */
    let c = a;
    if (typeof(c) === 'number') {
        // Convert signed to unsigned integer for logical left shift.
        c &= 0xFFFFFFFF; // ensure it is in range [0,2^32-1]
    } else {
        console.log('Error: a must be an integer');
        return;
    }
    
    // Logical right shift
    console.log("c >> b: " + (c >> b)); 
}
```
Please note that JavaScript uses IEEE 754 floating-point arithmetic, so the bitwise operations are performed as if on a 32-bit number internally. This could potentially cause different results to the original C code on larger numbers. Also, it is important to note that JavaScript's left shift operator (`<<`) works differently for signed and unsigned integers. If you pass in negative values to `a`, it will treat them as if they were unsigned values when performing left shifts.
