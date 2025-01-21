use std::io::{self, BufRead, BufReader};

fn main() {
    let mut input = BufReader::new(io::stdin());
    
    print!("Enter first integer: ");
    io::stdout().flush().expect("Failed to flush stdout");
    let mut nbr1_str = String::new();
    input.read_line(&mut nbr1_str).expect("Failed to read line");
    let nbr1: i32 = nbr1_str.trim_end().parse::<i32>().expect("Invalid integer");

    print!("Enter second integer: ");
    io::stdout().flush().expect("Failed to flush stdout");
    let mut nbr2_str = String::new();
    input.read_line(&mut nbr2_str).expect("Failed to read line");
    let nbr2: i32 = nbr2_str.trim_end().parse::<i32>().expect("Invalid integer");

    if nbr1 < nbr2 {
        println!("{} is less than {}", nbr1, nbr2);
    } else if nbr1 > nbr2 {
        println!("{} is greater than {}", nbr1, nbr2);
    } else {
        println!("{} is equal to {}", nbr1, nbr2);
    }
}