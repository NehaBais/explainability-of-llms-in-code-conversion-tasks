fn main() {
    bitwise(5, 3);
}

fn bitwise(a: i32, b: i32) {
    let ua = a as u32;
    println!("a and b: {}", a & b); // Note: parentheses are needed because & has lower precedence than <<
    println!("a or b:  {}", a | b);
    println!("a xor b: {}", a ^ b);
    println!("not a:   {}", !a);

    // Note: the C/C++ shift operators are not guaranteed to work if the shift count (that is, b)
    // is negative, or is greater or equal to the number of bits in the integer being shifted.
    println!("a shl b: {}", a << b); // Note: "<<" is used both for output and for left shift
    println!("a shr b: {}", a >> b); // typically arithmetic right shift, but not guaranteed
    println!("a lsr b: {}", ua >> b); // logical right shift (guaranteed)

    // there are no rotation operators in C++, but as of c++20 there is a standard-library rotate function.
    // The rotate function works for all rotation amounts, but the integer being rotated must always be an
    // unsigned integer.
    println!("a rol b: {}", ua.rotate_left(b as u32));
    println!("a ror b: {}", ua.rotate_right(b as u32));
}
