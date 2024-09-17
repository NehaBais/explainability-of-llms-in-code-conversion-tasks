use std::io;

fn main() {
    println!("Enter two integers:");

    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");

    let nbr1: i32 = input.trim().parse().expect("Invalid integer");

    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");

    let nbr2: i32 = input.trim().parse().expect("Invalid integer");

    if nbr1 < nbr2 {
        println!("{} is less than {}", nbr1, nbr2);
    } else if nbr1 > nbr2 {
        println!("{} is greater than {}", nbr1, nbr2);
    } else {
        println!("{} is equal to {}", nbr1, nbr2);
    }
}
