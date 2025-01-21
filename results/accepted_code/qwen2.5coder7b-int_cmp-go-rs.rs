use std::io;

fn main() {
    let mut input = String::new();

    println!("Enter first number: ");
    io::stdin().read_line(&mut input).expect("Failed to read line");
    let n1: i32 = input.trim().parse().expect("Please type a number!");

    input.clear();  // Clear the buffer

    println!("Enter second number: ");
    io::stdin().read_line(&mut input).expect("Failed to read line");
    let n2: i32 = input.trim().parse().expect("Please type a number!");

    if n1 < n2 {
        println!("{} less than {}", n1, n2);
    } else if n1 == n2 {
        println!("{} equal to {}", n1, n2);
    } else {
        println!("{} greater than {}", n1, n2);
    }
}