use std::io;

fn main() {
    println!("Enter two numbers:");
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");
    let n1: i32 = input
        .trim()
        .parse()
        .expect("Invalid input, please enter a number.");
    input.clear();
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");
    let n2: i32 = input
        .trim()
        .parse()
        .expect("Invalid input, please enter a number.");

    if n1 < n2 {
        println!("{} is less than {}", n1, n2);
    } else if n1 == n2 {
        println!("{} is equal to {}", n1, n2);
    } else {
        println!("{} is greater than {}", n1, n2);
    }
}
