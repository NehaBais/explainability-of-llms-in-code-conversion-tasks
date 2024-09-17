use std::io;

fn main() {
    let mut n1 = String::new();
    let mut n2 = String::new();

    println!("Enter number: ");
    io::stdin().read_line(&mut n1).expect("Failed to read line");
    let n1: i32 = n1.trim().parse().expect("Failed to parse integer");

    println!("Enter number: ");
    io::stdin().read_line(&mut n2).expect("Failed to read line");
    let n2: i32 = n2.trim().parse().expect("Failed to parse integer");

    if n1 < n2 {
        println!("{} is less than {}", n1, n2)
    } else if n1 == n2 {
        println!("{} is equal to {}", n1, n2)
    } else {
        println!("{} is greater than {}", n1, n2)
    }
}
