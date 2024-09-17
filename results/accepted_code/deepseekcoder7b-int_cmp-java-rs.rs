use std::io;

fn main() {
    let mut input = String::new();

    println!("Enter first integer:");
    io::stdin().read_line(&mut input).expect("Read line failed!");
    let nbr1 = match input.trim().parse::<i32>() {
        Ok(num) => num,
        Err(_) => panic!("Invalid number"),
    };
    
    println!("Enter second integer:");
    io::stdin().read_line(&mut input).expect("Read line failed!");
    let nbr2 = match input.trim().parse::<i32>() {
        Ok(num) => num,<｜begin▁of▁sentence｜>
    }

    if nbr1 < nbr2 {
        println!("{} is less than {}", nbr1, nbr2);
    } else if nbr1 > nbr2 {
        println!("{} is greater than {}", nbr1, nbr2);
    } else if nbr1 == nbr2 {
        println!("{} is equal to {}", nbr1, nbr2);
    }
}