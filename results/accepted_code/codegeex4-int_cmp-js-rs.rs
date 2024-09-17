use std::io;

fn main() {
    let mut input = String::new();

    println!("Enter first integer: ");
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");
    let a: i32 = input.trim().parse().expect("Please type a number!");

    input.clear();
    println!("Enter second integer: ");
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");
    let b: i32 = input.trim().parse().expect("Please type a number!");

    if a == b {
        println!("{a} equals {b}");
    }
    if a < b {
        println!("{a} is less than {b}");
    }
    if a > b {
        println!("{a} is greater than {b}");
    }
}
