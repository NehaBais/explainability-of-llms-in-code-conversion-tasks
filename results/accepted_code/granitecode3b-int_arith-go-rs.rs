use std::io;
fn main() {
    println!("Enter two integers:");
    let mut a = String::new();
    let mut b = String::new();

    io::stdin().read_line(&mut a).expect("Failed to read line");
    io::stdin().read_line(&mut b).expect("Failed to read line");

    let a: i32 = match a.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Please enter valid integers"),
    };

    let b: i32 = match b.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Please enter valid integers"),
    };

    println!("Sum: {}", a + b);
    println!("Difference: {}", a - b);
    println!("Product: {}", a * b);
    let quotient = a / b;
    let remainder = a % b;
    println!("Quotient: {} (truncated towards 0)", quotient);
    println!("Remainder: {} (same sign as first operand)", remainder);
}
