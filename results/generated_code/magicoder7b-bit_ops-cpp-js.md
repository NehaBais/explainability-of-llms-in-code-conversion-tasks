 In JavaScript, you can perform bitwise operations and shift operations by using built-in operators. Here is the converted code:

```javascript
function bitwiseAndOrXor(a, b){
    console.log("a and b: " + (a & b)); // Note: parentheses are needed because & has lower precedence than +
    console.log("a or b:  " + (a | b));
    console.log("a xor b: " + (a ^ b));
    console.log("not a:   " + ~a);
    
    // Note: JavaScript's left shift and right shift operators work for any positive shifting count, but not negative numbers or with zero.
    console.log("a << b: " + (a << b)); 
    console.log("a >> b: " + ((a >> b) | 0)); // JavaScript doesn't do a proper signed right shift without specifying it as unsigned. But the bitwise OR operation ensures that we get an unsigned number no matter what.
    
    let ua = a;
    console.log("a >>> b: " + (ua >> b)); // JavaScript does have a logical right shift operator, which always gives an unsigned number.
}
```

However, note that the JavaScript `~` operation is not exactly equivalent to the C++ `~`. In JavaScript, it returns the complement of the 32-bit integer representation of the number (i.e., `-a - 1`), while in C++, it produces a bitwise NOT of all bits. To mimic C++'s bitwise NOT in JavaScript, you would need to implement it yourself.
