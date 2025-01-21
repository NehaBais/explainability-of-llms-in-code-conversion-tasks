fn bitwise(a: i32, b: i32) {
    println!("a and b: {}", a & b);
    println!("a or b: {}", a | b);
    println!("a xor b: {}", a ^ b);
    println!("not a: {}", !a);
    println!("a << b: {}", a << b); // left shift
    println!("a >> b: {}", a >> b); // arithmetic right shift (on most platforms)
    
    // Logical right shift
    let c = a as u32;
    println!("c >> b: {}", c >> b); // logical right shift
}

fn main() {
    let a = 10; // Example values for a and b
    let b = 5;
    bitwise(a, b);
}