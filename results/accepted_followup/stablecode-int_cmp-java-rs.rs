use std::io;

fn main() {
    let mut input = String::new();

    io::stdin().read_line(&mut input)).expect("Failed to read from input");

    let nbr1: i32 = match input.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Invalid integer"),
    };

    input.clear();

    io::stdin().read_line(&mut input)).expect("Failed to read from input");

    let nbr2: i32 = match input.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Invalid integer"),
    };

    println!(
        "{} is {} than {}", 
        nbr1, if nbr1 < nbr2 {"less than"}, if nbr1 > nbr2 {"greater than"}, or if nbr1 == nbr2 {"equal to"}
    }
}