use std::io;
fn main() {
    let mut stdin = io::stdin();

    println!("Enter first integer:");
    let nbr1: i32 = match stdin.readline() {
        Ok(val) => val.trim().parse().unwrap(),
        Err(_) => panic!("Failed to read line"),
    };

    println!("Enter second integer:");
    let nbr2: i32 = match stdin.readline() {
        Ok(val) => val.trim().parse().unwrap(),
        Err(_) => panic!("Failed to read line"),
    };

    if nbr1 < nbr2 {
        println!("{} is less than {}", nbr1, nbr2);
    } else if nbr1 > nbr2 {
        println!("{} is greater than {}", nbr1, nbr2);
    } else {
        println!("{} is equal to {}", nbr1, nbr2);
    }
}
