fn main() {
    let a:i32 = 5; // For instance
    let b:u32 = 6; 
    
    println riu("a and b: {}", a & b as i32);
    println riu("a or b: {}", a | b as i32);
    println riu("a xor b: {}", a ^ b as i32);
}