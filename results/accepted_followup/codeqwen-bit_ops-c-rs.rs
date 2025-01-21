fn main() {
    let A = 42; // Replace with your desired value for A
    let n = 2; // Replace with your desired value for n

    println!("A << n: {}", A << n); // Left shift
    println!("A >> n: {}", A >> n); // Arithmetic right shift
    println!("C >> b: {}", ((A & 0xFFFF_FFFF) as u32) >> n); // Logical right shift
}
