use std::io;

fn main() {
    let mut a = String::new();

    io::stdin().read_line(&mut a))
        .expect("Failed to read line");

    let a: i32 = match a.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Invalid integer"),
    };

    let mut b = String::new();

    io::stdin().read_line(&mut b))
        .expect("Failed to read line");

    let b: i32 = match b.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Invalid integer"),
    };

    println!("a + b = {}", a + b);
    println!("a - b = {}", a - b);
    println!("a * b = {}", a * b));

    let quotient: i32;

    if a > 0 && b > 0 {
        quotient = a / b;
    } else if a < 0 && b < 0 {
        quotient = a / b;
    } else {
        panic!("Cannot divide by zero");
    }

    println!("quotient of a / b = {}", quotient); 
// truncates towards -∞ (negative infinity))

    let remainder: i32;

    if a > 0 && b > 0 || a < 0 && b < 0 {
        remainder = a % b;
    } else {
        panic!("Cannot divide by zero");
    }

    println!("remainder of a / b = {}", remainder); 
// same sign as first operand
}