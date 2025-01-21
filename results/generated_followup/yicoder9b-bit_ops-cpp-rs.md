The error messages are indicating that there is no `main` function defined within the crate, and that the mutability of variable 'a' in bitwise function can be removed as it is not being used in a way that requires mutation.

Corrected code:
```rs
extern crate num;
use num::Integer;

fn main() {
    bitwise(5, 2);
}

fn bitwise(a: i32, b: i32) {
    println!("a and b: {}", a & b); // Note: parentheses are needed because & has lower precedence than <<
    println!("a or b:  {}", a | b);
    println!("a xor b: {}", a ^ b);
    println!("not a:   {}", !a);

    // Note: the Rust shift operators are not guaranteed to work if the shift count (that is, b)
    // is negative or greater than or equal to the number of bits in the integer being shifted.
    println!("a shl b: {}", a << b); // Note: "<<" is used both for output and for left shift
    println!("a shr b: {}", a >> b); // typically arithmetic right shift, but not guaranteed
    let ua = a as u32;
    println!("a lsr b: {}", ua >> b); // logical right shift (guaranteed)

    // there are no rotation operators in Rust, and the Integer trait does not provide them either.
    // So we use the num crate that provides rotl and rotr functions.
    println!("a rol b: {}", ua.rotate_left(b as u32));
    println!("a ror b: {}", ua.rotate_right(b as u32));
}
```
