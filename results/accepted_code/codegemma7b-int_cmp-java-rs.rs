use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    let nbr1: i32 = input.trim().parse().unwrap();

    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    let nbr2: i32 = input.trim().parse().unwrap();

    if nbr1 < nbr2 {
        println!("{} is less than {}", nbr1, nbr2)
    }

    if nbr1 > nbr2 {
        println!("{} is greater than {}", nbr1, nbr2)
    }

    if nbr1 == nbr2 {
        println!("{} is equal to {}", nbr1, nbr2)
    }
}
