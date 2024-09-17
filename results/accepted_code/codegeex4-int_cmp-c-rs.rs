use std::io;

fn main() {
    let mut input = String::new();

    println!("Enter the first integer:");
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");
    let a: i32 = input.trim().parse().expect("Please enter a valid integer");

    input.clear();

    println!("Enter the second integer:");
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");
    let b: i32 = input.trim().parse().expect("Please enter a valid integer");

    if a < b {
        println!("{a} is less than {b}");
    }

    if a == b {
        println!("{a} is equal to {b}");
    }

    if a > b {
        println!("{a} is greater than {b}");
    }
}
