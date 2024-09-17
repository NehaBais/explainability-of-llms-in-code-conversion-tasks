Here is the JavaScript equivalent of your provided C code.

```JavaScript
function bitwise(a, b) {
    console.log("a and b: " + (a & b)));
    console.log("a or b: " + (a | b)));
    console.log("a xor b: " + (a ^ b)));
    console.log("not a: " + (~a))));

    let c = a;
    console.log("c >> b: " + ((c >> b) & 0xffffffff)))); /* logical right shift */

    return 0;
}
```

This JavaScript function works exactly like the provided C code. It takes two integers as input, performs bitwise operations on these integers, and then prints out the results of these operations.
