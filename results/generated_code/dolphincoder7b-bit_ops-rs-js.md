Below is the JavaScript equivalent of the Rust code. Note that `u` is not supported in JavaScript, so this code uses `Number`, which behaves similarly to a signed integer.

```javascript
function main() {
    let a = 105;
    let b = 91;

    console.log(`a      = ${a.toString(2)}`);
    console.log(`b      = ${b.toString(2)}`);
    console.log(`a | b   = ${(a|b).toString(2)}`);
    console.log(`a & b   = ${(a&b).toString(2)}`);
    console.log(`a ^ b   = ${(a^b).toString(2)}`);
    console.log(`!a     = ${(!a).toString(2)}`);
    console.log(`a << 3 = ${(a<<3).toString(2)}`);
    console.log(`a >> 3 = ${(a>>3).toString(2)}`);
}
```

This JavaScript function uses `toString` with a radix of 2 to convert an integer to binary, padding it with leading zeros if necessary. The bitwise operators `&`, `|`, and `^` perform the desired operations on two integers. The unary operator `!` performs a logical NOT operation on a single integer (bitwise NOT). The shift operators `<<`, `>>>` perform left and right shifts respectively, with an optional shift amount specified by the user.

Note: In JavaScript, the unary operator `~` is used for bitwise NOT, which negates the sign of all bits in the binary representation of a number, including its most significant bit (MSB). If you want to perform a logical NOT operation on a single integer, you can use the unary `!` operator as shown above.
