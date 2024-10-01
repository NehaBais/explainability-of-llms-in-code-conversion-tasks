use std::env;

fn main() {
    let args: Vec<String> = env::args().skip(1).collect();

    if args.len() < 2 {
        panic!("Not enough arguments. Please provide two integers.");
    }

    match (args[0].parse::<i32>(), args[1].parse::<i32>()) {
        (Ok(a), Ok(b)) => {
            if b == 0 {
                panic!("Division by zero error.");
            } else {
                println!("{} + {} = {}", a, b, a + b);
                println!("{} - {} = {}", a, b, a - b);
                println!("{} * {} = {}", a, b, a * b);
                println!("{} / {} = {}", a, b, a / b); // rounds towards 0 (in C99)
                println!("{} % {} = {}", a, b, a % b); // same sign as first operand (in C99)
            }
        }
        _ => panic!("Failed to parse one or more integers."),
    };
}
