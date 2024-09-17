Sure! Here's the Rust code that performs the same operations as the C++ code:
```
fn bitwise(a: i32, b: i32) {
 println!("a and b: {}", a & b);
 println!("a or b: {}", a | b);
 println!("a xor b: {}", a ^ b);
 println!("not a: {}", !a);

 // Note: the C/C++ shift operators are not guaranteed to work if the shift count (that is, b)
 // is negative, or is greater or equal to the number of bits in the integer being shifted.
 println!("a shl b: {}", a << b); // Note: "<<" is used both for output and for left shift
 println!("a shr b: {}", a >> b); // typically arithmetic right shift, but not guaranteed

 let ua = a as u32; // Cast to unsigned integer to use logical right shift (guaranteed)
 println!("a lsr b: {}", ua >> b);

 // there are no rotation operators in Rust, but we can simulate them using the bitwise operators.
 println!("a rol b: {}", (a << b) | (ua >> (32 - b)));
 println!("a ror b: {}", (ua << b) | (a >> (32 - b)));
}
``` 
Note that in Rust, left shifts (`<<`) and right shifts (`>>`) are used for signed and unsigned integer arithmetic, respectively. Also, `rotr` is a standard library function that performs a bitwise rotate on an integer.

