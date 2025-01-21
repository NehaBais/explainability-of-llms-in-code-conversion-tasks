fn bitwise(a: i32, b: i32) {
    println!("a and b: {}", a & b);
    println!("a or b:  {}", a | b);
    println!("a xor b: {}", a ^ b);
    println!("not a:   {}", !a);
    
    // Note: the C/C++ shift operators are not guaranteed to work if the shift count (that is, b)
    // is negative, or is greater or equal to the number of bits in the integer being shifted.
    println!("a shl b: {}", a << b); // Note: "<<" is used both for output and for left shift
    println!("a shr b: {}", a >> b); // typically arithmetic right shift, but not guaranteed
    
    let ua = a as u32;
    println!("a lsr b: {}", ua >> b); // logical right shift (guaranteed)
    
    // There are no rotation operators in Rust, but we can implement them using shifts.
    // For left rotate and right rotate, we need to define our own functions.
    let rol = |x: u32, n: u32| -> u32 { (x << n) | (x >> (32 - n)) };
    let ror = |x: u32, n: u32| -> u32 { (x >> n) | (x << (32 - n)) };
    
    println!("a rol b: {}", rol(ua, b as u32));
    println!("a ror b: {}", ror(ua, b as u32));
}

fn main() {
    let a = 0b1010; // Example value for a
    let b = 3;      // Example value for b
    bitwise(a, b);
}