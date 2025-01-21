fn main() {
    let mut args: Vec<String> = std::env::args().skip(1).collect();

    // Parse the arguments and convert them to integers
    if args.len() < 2 {
        eprintln!("Usage: program_name a b");
        return;
    }
    let a: i32 = args[0].parse().expect("a must be an integer");
    let b: i32 = args[1].parse().expect("b must be an integer");

    // Calculate and print the results
    println!("a+b = {}", a + b);
    println!("a-b = {}", a - b);
    println!("a*b = {}", a * b);
    println!("a/b = {}", a / b); // truncate towards zero
    println!("a%%b = {}", a % b); // same sign as first operand if different from the second
}
