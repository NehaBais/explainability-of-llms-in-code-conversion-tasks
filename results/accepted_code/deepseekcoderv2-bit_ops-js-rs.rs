fn main() {
    let a = 0b1010; // Example value for 'a'
    let b = 0b1100; // Example value for 'b'

    println!("a AND b: {}", a & b);
    println!("a OR b: {}", a | b);
    println!("a XOR b: {}", a ^ b);
    println!("NOT a: {:08b}", !a); // Assuming 8-bit representation for NOT operation
    println!("a << b: {}", a << (b & 0x1F)); // Left shift, mask b to fit within 32 bits
    println!("a >> b: {}", a >> (b & 0x1F)); // Arithmetic right shift, mask b to fit within 32 bits
    println!("a >>> b: {:08b}", a as u32 << (32 - (b & 0x1F)) | a >> (b & 0x1F)); // Logical right shift, assuming 8-bit representation for output
}