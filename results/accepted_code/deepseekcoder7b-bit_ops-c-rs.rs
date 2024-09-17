fn bitwise(mut a: i32, b: u32) {
    println!("a and b: {}", a & b);
    println!("a or b: {}", a | b);
    println!("a xor b: {}", a ^ b);
    println!("not a: {}", !a);

    // Conversion to unsigned for right shift and rotation.
    let c = a as u32;

    println!("c >> b: {}", c >> b); /* logical right shift */

    println!("a << b: {}", a << b); /* left shift */
}
