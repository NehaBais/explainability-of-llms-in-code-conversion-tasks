use std::io;

fn main() {
    let mut input = String::new();

    println!("Enter first number:");
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");
    let nbr1: i32 = input.trim().parse().expect("Please type a number!");

    input.clear();

    println!("Enter second number:");
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");
    let nbr2: i32 = input.trim().parse().expect("Please type a number!");

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
