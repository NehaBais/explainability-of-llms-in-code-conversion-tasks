use rust_math::pow; // Fix 1: Change num to rust-math crate for pow function.
use std::io;

fn main() {
    let mut a = String::new();
    let mut b = String::new();

    println!("enter two integers: ");

    io::stdin().read_line(&mut a).expect("Failed to read line");
    io::stdin().read_line(&mut b).expect("Failed to read line");

    let a: i32 = a.trim().parse().expect("Please type a number!");
    let b: i32 = b.trim().parse().expect("Please type a number!");

    println!("{} + {} = {}", a, b, a + b);
    println!("{} - {} = {}", a, b, a - b);
    println!("{} * {} = {}", a, b, a * b);
    // in Rust division truncates towards zero, same as Go
    println!("{} / {} = {}", a, b, a / b);
    // In Rust the modulo operation gives the remainder with the sign of the dividend.
    println!("{} % {} = {}", a, b, a % b);

    let p: i32 = pow::pow2(a as f64, b as f64) as i32; // Fix 2: Use rust-math pow function and convert types.
    println!("{} to the power of {} is {}", a, b, p);
}