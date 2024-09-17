fn main() {
    let a: i32 = std::env::args().nth(1).unwrap().parse().unwrap();
    let b: i32 = std::env::args().nth(2).unwrap().parse().unwrap();

    let sum = a + b;
    let difference = a - b;
    let product = a * b;
    let division = a as f64 / b as f64; // Division in Rust returns a floating-point number
    let remainder = a % b; // Remainder in Rust uses the same sign as the first operand

    println!("a + b = {}", sum);
    println!("a - b = {}", difference);
    println!("a * b = {}", product);
    println!("a / b = {}", division);
    println!("a % b = {}", remainder);
}
