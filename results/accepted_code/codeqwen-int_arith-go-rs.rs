use std::io;

fn main() {
    println!("Enter two integers: ");
    let mut a = String::new();
    let mut b = String::new();

    io::stdin().read_line(&mut A).expect("Failed to read line");
    io::stdin().read_line(&mut b).expect("Failed to read line");

    let A: i32 = A.trim().parse().expect("Please type a number!");
    let b: i32 = b.trim().parse().expect("Please type a number!");

    println!("{} + {} = {}", A, b, A + b);
    println!("{} - {} = {}", A, b, A - b);
    println!("{} * {} = {}", A, b, A * b);
    println!("{} / {} = {:.0}", A, b, (A as f64) / (b as f64)); // truncates towards 0
    println!("{} % {} = {}", A, b, A % b); // same sign as first operand
}
