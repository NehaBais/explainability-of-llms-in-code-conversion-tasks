use std::io;

fn main() {
    let mut nbr1 = String::new();
    let mut nbr2 = String::new();

    println!("Enter the first number: ");
    io::stdin().read_line(&mut nbr1).unwrap();
    println!("Enter the second number: ");
    io::stdin().read_line(&mut nbr2).unwrap();

    let nbr1: i32 = nbr1.parse().unwrap();
    let nbr2: i32 = nbr2.parse().unwrap();

    if nbr1 < nbr2 {
        println!("{} is less than {}", nbr1, nbr2);
    } else if nbr1 > nbr2 {
        println!("{} is greater than {}", nbr1, nbr2);
    } else {
        println!("{} is equal to {}", nbr1, nbr2);
    }
}
