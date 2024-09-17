use std::env;
use std::process;

fn main() {
    let args: Vec<String> = env::args().collect();
    if args.len() < 3 {
        process::exit(1);
    }

    let b_str = &args[2];
    let mut b_str_chars = b_str.chars();

    // parse the second argument as an integer
    let b: i32 = match b_str_chars.next() {
        Some(c) => c as i32 - 48,
        None => process::exit(1),
    };

    if b == 0 {
        process::exit(2);
    }

    // parse the first argument as an integer
    let a: i32 = match args[1].parse() {
        Ok(num) => num,
        Err(_) => process::exit(1),
    };

    println!("a+b = {}", a + b);
    println!("a-b = {}", a - b);
    println!("a*b = {}", a * b);
    // quotient rounds towards 0 (in C99)
    println!("a/b = {}", a / b);
    // remainder same sign as first operand (in C99)
    println!("a%b = {}", a % b);
}
