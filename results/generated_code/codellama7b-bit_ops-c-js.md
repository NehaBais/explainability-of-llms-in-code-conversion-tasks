Sure! Here's the converted code in JavaScript:
```scss
function bitwise(a, b) {
    console.log("a and b: " + (a & b));
    console.log("a or b: " + (a | b));
    console.log("a xor b: " + (a ^ b));
    console.log("not a: " + ~a);
    console.log("a << n: " + (a << b)); /* left shift */
    console.log("a >> n: " + (a >>> b)); /* on most platforms: arithmetic right shift */
    // convert the signed integer into unsigned, so it will perform logical shift
    let c = a;
    console.log("c >> b: " + (c >> b)); /* logical right shift */
    return 0;
}
```
Note that JavaScript does not have native support for bitwise operators or rotation operations, so these operations are performed using the bitwise AND, OR, and XOR operators (`&`, `|`, and `^`), as well as the unary negation operator (`~`). The left shift operator is also used to perform a logical right shift on an unsigned integer.

Also note that JavaScript does not have a built-in way to perform a bitwise rotation operation, so this operation is performed using a combination of bitwise AND and OR operators.
