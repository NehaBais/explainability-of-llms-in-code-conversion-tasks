use std::io::{self, Write};

fn main() {
    print!("Enter first number: ");
    io::stdout().flush().unwrap();
    let mut input1 = String::new();
    io::stdin()
        .read_line(&mut input1)
        .expect("Failed to read line");
    let _input1: i32 = input1.trim().parse().unwrap();

    print!("Enter second number: ");
    io::stdout().flush().unwrap();
    let mut input2 = String::new();
    io::stdin()
        .read_line(&mut input2)
        .expect("Failed to read line");
    let _input2: i32 = input2.trim().parse().unwrap();

    // ... the rest of your program here ...
}
