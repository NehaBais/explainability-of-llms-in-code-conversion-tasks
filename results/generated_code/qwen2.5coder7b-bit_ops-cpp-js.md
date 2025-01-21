Here is the equivalent JavaScript code for your C++ routine. 

```JavaScript
function bitwise(a, b) {
    console.log("a and b:", a & b);
    console.log("a or b: ", a | b);
    console.log("a xor b: ", a ^ b);
    console.log("not a:   ", ~a);

    console.log("a shl b: ", a << b);
    console.log("a shr b: ", a >> b);
    let ua = Math.abs(a); // Since JavaScript does not have unsigned integers, we use Math.abs to simulate an unsigned right shift
    console.log("a lsr b: ", ua >>> b);

    console.log("a rol b: ", ((a << b) | (a >> (32 - b))) & 0xFFFFFFFF);
    console.log("a ror b: ", ((a >> b) | (a << (32 - b))) & 0xFFFFFFFF);
}
```
This JavaScript code implements a bitwise routine that performs and, or, xor, not operations on two integers. It also supports left shift, right shift, logical right shift, and both rotation operations. For the bit shifting and rotations in JavaScript, we use bitwise operators as C++ does. 

Note: JavaScript does not have unsigned integers like C++. So for a logical right shift (lsr), we use the `>>>` operator to simulate an unsigned right shift by using bitwise AND operation with 0xFFFFFFFF.

In JavaScript, the bitwise operators work on 32-bit numbers, so if you perform bitwise operations on larger than 32 bits, you need to convert them back into 32-bit numbers to ensure correct results.
