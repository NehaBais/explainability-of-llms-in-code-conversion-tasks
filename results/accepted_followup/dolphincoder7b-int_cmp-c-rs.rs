use std::io;

fn main() {
    println!("Enter two integers:");

    let mut input = String::new();

    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");

    let words: Vec<&str> = input.split(' ').collect();

    if words.len() != 2 {
        eprintln!("Input should contain exactly two integers.");
        return;
    }

    let a: i32 = words[0].parse().unwrap_or_else(|_| {
        eprintln!("Invalid integer format");
        process::exit(1);
    });

    let b: i32 = words[1].parse().unwrap_or_else(|_| {
        eprintln!("Invalid integer format");
        process::exit(1);
    });

    if a < b {
        println!("{} is less than {}", a, b);
    } else if a == b {
        println!("{} is equal to {}", a, b);
    } else {
        println!("{} is greater than {}", a, b);
    }
}
