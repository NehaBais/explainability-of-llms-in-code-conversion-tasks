fn main() {
    println!("a and b: {}", 10 & 2);
    println!("a or b: {}", 10 | 2);
    println!("a xor b: {}", 10 ^ 2);
    println!("not a: {}", !10);
    println!("a << n: {}", 10 << 2); // left shift
    println!("a >> n: {}", 10 >> 2); // on most platforms: arithmetic right shift
    let c = 10 as u32;
    println!("c >> b: {}", c >> 2); // logical right shift
}
