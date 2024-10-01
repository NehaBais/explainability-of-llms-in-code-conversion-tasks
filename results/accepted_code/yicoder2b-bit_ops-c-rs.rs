fn bitwise(a: i32, b: u32) {
    let mut a = a; // to avoid mutable global variables

    println!("a and b: {:?}", (a & b) as u32);
    println!("a or b: {:?}", (a | b) as u32);
    println!("a xor b: {:?}", (a ^ b) as u32);
    println!("not a: {:?}", (~a) as i32);

    let mut c = a; // to avoid mutable global variables
    c >>= b as usize; // logical right shift
    println!("c >> b: {:#?}", c);
}
