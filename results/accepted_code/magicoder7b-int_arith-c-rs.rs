use std::env;
use std::str::FromStr;

fn main() {
    let args: Vec<String> = env::args().collect();

    if args.len() < 3 {
        panic!("Please provide at least two integer arguments");
    }

    let a_arg = &args[args.len() - 2];
    let b_arg = &args[args.len() - 1];

    if let Ok(a) = i32::from_str(a_arg) {
        if let Ok(b) = i32::from_str(b_arg) {
            println!("Sum: {}", a + b);
            println!("Difference: {}", a - b);
            println!("Product: {}", a * b);
            println!("Integer Division (truncated): {}", a / b);
            println!("Remainder: {}", a % b);
        } else {
            panic!("Invalid second argument");
        }
    } else {
        panic!("Invalid first argument");
    }
}
