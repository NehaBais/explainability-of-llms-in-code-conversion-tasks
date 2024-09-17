use std::env;

fn main() {
    let args: Vec<String> = env::args().collect();

    // convert string to i32, note that index 0 and 1 are taken by the executable name.
    let a: i32 = args[1].parse().unwrap();
    let b: i32 = args[2].parse().unwrap();

    let sum = a + b;
    let difference = a - b;
    let product = a * b;
    // Rust does integer division, but you can use f32::floor() to round towards zero. This will make it behave like JavaScript if needed.
    let quotient = a / b;
    let remainder = a % b;

    println!("{} + {} = {}", a, b, sum);
    println!("{} - {} = {}", a, b, difference);
    println!("{} * {} = {}", a, b, product);
    // If you want to behave exactly like JavaScript, use f32::floor() instead of just division.
    println!("{} / {} = {}", a, b, quotient);
    println!("{} % {} = {}", a, b, remainder);
}
