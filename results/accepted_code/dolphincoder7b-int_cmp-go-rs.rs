use std::io;

fn main() {
    let mut n1 = String::new();
    io::stdin().read_line(&mut n1).expect("Failed to read line");

    let mut n2 = String::new();
    io::stdin().read_line(&mut n2).expect("Failed to read line");

    let n1: i32 = n1.trim().parse().unwrap();
    let n2: i32 = n2.trim().parse().unwrap();

    match (n1, n2) {
        (x, y) if x < y => println!("{} is less than {}", x, y),
        (x, y) if x == y => println!("{} is equal to {}", x, y),
        (x, y) => println!("{} is greater than {}", x, y),
    }
}
