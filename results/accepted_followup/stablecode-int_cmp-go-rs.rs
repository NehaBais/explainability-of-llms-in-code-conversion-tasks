use std::io;

fn main() {
    let mut n1 = String::new();
    println!("enter number: 
");
    io::stdin().read_line(&mut n1)).expect("Failed to read line");

    let n1: i32 = match n1.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Not a valid integer"),
    };

    let mut n2 = String::new();
    println!("enter number: 
");
    io::stdin().read_line(&mut n2)).expect("Failed to read line");

    let n2: i32 = match n2.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Not a valid integer"),
    };

    match n1.cmp(&n2) {
        std::cmp::Ordering::Less => println!("{} less than {}", n1, n2)),
        std::cmp::Ordering::Equal => println!("{} equal to {}", n1, n2)),
        std::cmp::Ordering::Greater => println!("{} greater than {}", n1, n2))),
    }
}