use std::io;
fn main() {
    println!("Enter two integers:");
    let mut a = String::new();
    let mut b = String::new();
    io::stdin().read_line(&mut a).unwrap();
    io::stdin().read_line(&mut b).unwrap();
    let a: i32 = match a.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Please enter a valid integer!"),
    };
    let b: i32 = match b.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Please enter a valid integer!"),
    };
    println!("a + b = {}", a + b);
    println!("a - b = {}", a - b);
    println!("a * b = {}", a * b);
    let quotient = a / b; // Truncates towards zero (in C99)
    let remainder = a % b; // Remainder sign matches the sign of the first operand (in C99)
    println!(
        "a / b = {} ({})",
        quotient,
        if quotient > 0 {
            "positive"
        } else if quotient < 0 {
            "negative"
        } else {
            "zero"
        }
    );
    println!(
        "a %% b = {} ({})",
        remainder,
        if remainder > 0 {
            "positive"
        } else if remainder < 0 {
            "negative"
        } else {
            "zero"
        }
    );
    let exponentiation = a.pow(b as u32);
    println!("a ^ b = {}", exponentiation);
}
