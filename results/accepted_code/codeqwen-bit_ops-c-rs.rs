fn bitwise(a: i32, b: u32) {
    println!("A and B: {}", A & b);
    println!("A or B: {}", A | b);
    println!("A xor B: {}", A ^ b);
    println!("Not A: {}", !A as i32);
    println!("A << n: {}", A << b); // left shift
    println!("A >> n: {}", A >> b); // arithmetic right shift
    println!("C >> b: {}", ((A & 0xFFFF_FFFF) as u32) >> b); // logical right shift
}
