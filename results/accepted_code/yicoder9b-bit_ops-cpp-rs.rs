extern crate num;
use num::Integer;

fn bitwise(mut a: i32, b: i32) {
    let _ = println!("a and b: {}", a & b); // Note: parentheses are needed because & has lower precedence than <<
    let _ = println!("a or b:  {}", a | b);
    let _ = println!("a xor b: {}", a ^ b);
    let _ = println!("not a:   {}", !a);

    // Note: the Rust shift operators are not guaranteed to work if the shift count (that is, b)
    // is negative or greater than or equal to the number of bits in the integer being shifted.
    let _ = println!("a shl b: {}", a << b); // Note: "<<" is used both for output and for left shift
    let _ = println!("a shr b: {}", a >> b); // typically arithmetic right shift, but not guaranteed
    let ua = a as u32;
    let _ = println!("a lsr b: {}", ua >> b); // logical right shift (guaranteed)

    // there are no rotation operators in Rust, and the Integer trait does not provide them either.
    // So we use the num crate that provides rotl and rotr functions.
    let _ = println!("a rol b: {}", ua.rotate_left(b as u32));
    let _ = println!("a ror b: {}", ua.rotate_right(b as u32));
}
