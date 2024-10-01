use std::io;

fn main() {
    let mut n1 = String::new();
    let mut n2 = String::new();
    println!("Enter number: ");
    match io::stdin().read_line(&mut n1) {
        Ok(_n) => (),
        Err(error) => println!("{}", error),
    }
    println!("Enter another number: ");
    match io::stdin().read_line(&mut n2) {
        Ok(_n) => (),
        Err(error) => println!("{}", error),
    }
    let first = n1.trim_end().parse::<i32>().unwrap();
    let second = n2.trim_end().parse::<i32>().unwrap();

    if first < second {
        println!("{} less than {}", first, second);
    } else if first == second {
        println!("{} equal to {}", first, second);
    } else {
        println!("{} greater than {}", first, second);
    }
}
