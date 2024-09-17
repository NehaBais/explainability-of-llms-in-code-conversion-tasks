Here is the JavaScript version of your C++ code:

```javascript
function bitwise(A, b) {
    console.log("A and B: ", A & B);
    console.log("A or B:  ", A | B);
    console.log("A xor B: ", A ^ B);
    console.log("Not A: ", ~A);

    // Note: The C/C++ shift operators are not guaranteed to work if the shift count (that is, b)
    // Is negative, or is greater or equal to the number of bits in the integer being shifted.
    console.log("A shl B: ", A << b); // Note: "<<" is used both for output and for left shift
    console.log("A shr B: ", A >> b); // typically arithmetic right shift, but not guaranteed
    var ua = A;
    console.log("A lsr B: ", ua >>> b); // logical right shift (guaranteed)

    // there are no rotation operators in JavaScript, but as of c++20 there is a standard-library rotate function.
    // The rotate function works for all rotation amounts, but the integer being rotated must always be an
    // unsigned integer.
    console.log("A rol B: ", (ua << b) >>> 0);
    console.log("A ror B: ", (ua >>> b) | ((ua & -1) << (32 - b)));
}
```

Some notes about this conversion:

- JavaScript doesn't have built-in bitwise rotations. We have to manually implement these in the function using bitwise operations.
- In JavaScript, left shift and right shift are handled with `<<` and `>>`. However, there isn't a specific operator for unsigned right shift (`>>>`) in JavaScript as it is not supported by all browsers. For that we can use this workaround: `((ua << b) >>> 0)`.
- Also, `~` is used to perform bitwise NOT operation.
- Bitwise XOR and OR operations are performed using the `^`, `|` respectively in JavaScript.
