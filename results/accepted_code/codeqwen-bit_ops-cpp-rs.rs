fn main() {
    bitwise(10, 5);
}

fn bitwise(a: i32, b: i32) {
    println!("A and B: {}", A & B);
    println!("A or B:  {}", A | B);
    println!("A xor B: {}", A ^ B);
    println!("Not A:  {}", !A);

    // Note: The Rust shift operators are not guaranteed to work if the shift count (that is, b)
    // Is negative or is greater or equal to the number of bits in the integer being shifted.
    println!("A shl B: {}", A << b);
    println!("A shr B: {}", A >> b);
    let ua = A as u32;
    println!("A lsr B: {}", ua >> b);

    // there are no rotation operators in Rust, but we can use the bitwise xor trick to rotate.
    println!("A rol B: {}", (A << b) | (A >> 32 - b));
    println!("A ror B: {}", (A >> b) | (A << 32 - b));
}
