Here's the converted code from C++ to JavaScript:
```javascript
function bitwise(a, b) {
  console.log("a and b: ", a & b); // Note: parentheses are needed because & has lower precedence than <<
  console.log("a or b:  ", a | b);
  console.log("a xor b: ", a ^ b);
  console.log("not a:   ", ~a);

  // Note: the C/C++ shift operators are not guaranteed to work if the shift count (that is, b)
  // is negative, or is greater or equal to the number of bits in the integer being shifted.
  console.log("a shl b: ", a << b); // Note: "<<" is used both for output and for left shift
  console.log("a shr b: ", a >> b); // typically arithmetic right shift, but not guaranteed
  var ua = a;
  console.log("a lsr b: ", ua >> b); // logical right shift (guaranteed)

  // there are no rotation operators in C++, but as of c++20 there is a standard-library rotate function.
  // The rotate function works for all rotation amounts, but the integer being rotated must always be an
  // unsigned integer.
  console.log("a rol b: ", ua << b | ua >>> (32 - b));
  console.log("a ror b: ", ua >>> b | ua << (32 - b));
}
```
In JavaScript, the bitwise AND, OR, and XOR operators are represented by the `&`, `|`, and `^` symbols, respectively. The bitwise NOT operator is represented by the `~` symbol. The left shift operator is represented by the `<<` symbol, and the right shift operator is represented by the `>>` symbol.
In JavaScript, the logical right shift operator (`>>`) performs an arithmetic right shift, which means that the bits that are shifted out of the most significant bit (MSB) are copied to the least significant bit (LSB), and the MSB is set to 0. The right arithmetic shift operator (`>>>`), on the other hand, performs a logical right shift, which means that the bits that are shifted out of the MSB are always set to 0.
The left rotate operator (`rol`) and the right rotate operator (`ror`) are not directly supported in JavaScript. However, they can be emulated using bitwise operations. The `rol` operation is equivalent to a left shift followed by a bitwise OR with a right shift of the same amount. The `ror` operation is equivalent to a right shift followed by a bitwise OR with a left shift of the same amount.

