fn bitwise(a: i32, b: i32) {
    println!("a and b: {}", a & b);
    println!("a or b: {}", a | b);
    println!("a xor b: {}", a ^ b);
    println!("not a: {}", !a);
    println!("a << n: {}", a << b); // left shift
    println!("a >> n: {}", a >> b); // on most platforms: arithmetic right shift
    let c = a as u32;
    println!("c >> b: {}", c >> b); // logical right shift
}
