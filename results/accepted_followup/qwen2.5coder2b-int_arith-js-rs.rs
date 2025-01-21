use std::io;

fn main() {
    let a: i32 = io::stdin()
        .read_line()
        .expect("Failed to read line")
        .trim_end()
        .parse::<i32>()
        .expect("Invalid input");

    let b: i32 = io::stdin()
        .read_line()
        .expect("Failed to read line")
        .trim_end()
        .parse::<i32>()
        .expect("Invalid input");

    println!("a + b = {}", a + b);
    println!("a - b = {}", a - b);
    println!("a * b = {}", a * b);
    println!("a / b = {:.6}", a as f64 / b as f64); // Using {} for float numbers in Rust
    println!(
        "a % b = {}",
        (if a >= 0 {
            if b > 0 {
                a - b
            } else {
                a + b
            }
        } else {
            if b > 0 {
                a + b
            } else {
                a - b
            }
        })
        .abs()
    );
}
