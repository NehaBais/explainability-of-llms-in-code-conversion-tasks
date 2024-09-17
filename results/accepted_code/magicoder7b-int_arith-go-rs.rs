use std::io;

fn main() {
    let mut a = String::new();
    let _ = io::stdin().read_line(&mut a);
    let a: i32 = a.trim().parse().unwrap();
    let mut b = String::new();
    let _ = io::stdin().read_line(&mut b);
    let b: i32 = b.trim().parse().unwrap();

    println!("{} + {} = {}", a, b, a + b);
    println!("{} - {} = {}", a, b, a - b);
    println!("{} * {} = {}", a, b, a * b);
    println!("{} / {} = {:.0}", a, b, a as f64 / b as f64); // truncates towards 0
    println!("{} %% {} = {}", a, b, a % b); // same sign as first operand
}
