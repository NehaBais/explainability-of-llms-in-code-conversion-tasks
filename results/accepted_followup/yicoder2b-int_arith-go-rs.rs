use std::io;

fn main() {
    let mut a = io::stdin().read_line(&mut a).expect("Failed to read line from standard input"); // Get two integers from user
    let mut b = io::stdin().read_line(&mut b).expect("Failed to read line from standard input");

    println!("{} + {} = {}", &a, &b, a as i32 + b as i32); // display their sum
    println!("{} - {} = {}", &a, &b, a as i32 - b as i32); // display their difference
    println!("{} * {} = {}", &a, &b, a as i32 * b as i32); // display their product
    println!("{} / {} = {}", &a, &b, a as i32 / b as i32); // truncates towards 0 (same as C++)
    println!("{} % {} = {:+}", &a, &b, a as i32 % b as i32); // same sign as first operand
}