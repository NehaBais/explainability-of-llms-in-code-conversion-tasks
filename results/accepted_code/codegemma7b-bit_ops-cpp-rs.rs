fn bitwise(a: i32, b: i32) {
    println!("a and b: {}", a & b); // & has lower precedence than <<
    println!("a or b: {}", a | b);
    println!("a xor b: {}", a ^ b);
    println!("not a: {}", !a); // ~ for bitwise NOT

    // Shift operators are guaranteed to work for non-negative shift counts.
    println!("a shl b: {}", a << b); // << for left shift
    println!("a shr b: {}", a >> b); // >> for right shift (arithmetic)
    let ua = a as u32;
    println!("a lsr b: {}", ua >> b); // >> for right shift (logical)

    // Rotate operators are available in the std library.
    println!("a rol b: {}", a.rotate_left(b as i32));
    println!("a ror b: {}", a.rotate_right(b as i32));
}
