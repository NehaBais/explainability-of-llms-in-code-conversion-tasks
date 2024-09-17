Sure! Here's the converted code in JavaScript:
```scss
function main() {
let a = 105; // u8
let b = 91; // u8
console.log("a      = " + a.toString(2));
console.log("b      = " + b.toString(2));
console.log("a | b  = " + (a | b).toString(2));
console.log("a & b  = " + (a & b).toString(2));
console.log("a ^ b  = " + (a ^ b).toString(2));
console.log("!a     = " + (!a).toString(2));
console.log("a << 3 = " + (a << 3).toString(2));
console.log("a >> 3 = " + (a >> 3).toString(2));
}
```
Explanation:

In JavaScript, we can use the bitwise operators to perform bitwise AND, OR, and XOR on integers. We can also use the unary operator `!` to perform a bitwise NOT on an integer. The left shift (`<<`) and right shift (`>>`) operators are used to perform bitwise shifts on integers.

The `toString(2)` method is used to convert the integer values into binary strings, which can be printed to the console using `console.log()`.

Note that in JavaScript, the `|`, `&`, `^`, and `<<` operators have different behavior than their Rust counterparts. For example, in Rust, the `|` operator is a bitwise OR operator, but in JavaScript, it is a logical OR operator. Similarly, the `>>` operator is a signed right shift operator in Rust, while it is an unsigned right shift operator in JavaScript.
