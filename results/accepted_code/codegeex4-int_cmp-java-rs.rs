use std::io::{self, Write};

fn main() {
    let mut input = String::new();

    print!("Enter first integer: ");
    io::stdout().flush().unwrap();
    io::stdin().read_line(&mut input).unwrap();
    let nbr1: i32 = match input.trim().parse() {
        Ok(num) => num,
        Err(_) => {
            println!("Please enter a valid integer!");
            return;
        }
    };

    print!("Enter second integer: ");
    io::stdout().flush().unwrap();
    io::stdin().read_line(&mut input).unwrap();
    let nbr2: i32 = match input.trim().parse() {
        Ok(num) => num,
        Err(_) => {
            println!("Please enter a valid integer!");
            return;
        }
    };

    if nbr1 < nbr2 {
        println!("{} is less than {}", nbr1, nbr2);
    }

    if nbr1 > nbr2 {
        println!("{} is greater than {}", nbr1, nbr2);
    }

    if nbr1 == nbr2 {
        println!("{} is equal to {}", nbr1, nbr2);
    }
}
