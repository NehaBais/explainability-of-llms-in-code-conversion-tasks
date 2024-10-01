fn bitwise(a: i32, b: u32) {
    println!("a AND b: {:?}", a & b as i32);
    println!("a OR b: {:?}", a | b as i32);
    println!("a XOR b: {:?}", a ^ b as i32);
    println!("NOT a: {:?}", !a);
    let left_shift = u32::from(a) << b; // left shift
    println!("a << b: {:?}", i32::from(left_shift));
    println!("a >> b: {:?}", a >> b as u32); // arithmetic right shift

    // logical right shift cannot be done with basic bitwise operators in Rust. We need to convert into unsigned type for this operation.
    let right_shift = u32::from(a) >> b;
    println!("a >>> b: {:?}", i32::from(right_shift)); // logical right shift
}
