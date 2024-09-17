use std::io;

fn main() {
    println!("Enter value of a: ");
    let mut a = String::new();
    io::stdin().read_line(&mut a).expect("Failed to read line");

    println!("Enter value of b: ");
    let mut b = String::new();
    io::stdin().read_line(&mut b).expect("Failed to read line");

    let a: i32 = a.trim().parse().unwrap();
    let b: i32 = b.trim().parse().unwrap();

    if a < b {
        println!("a is less than b");
    } else if a > b {
        println!("a is greater than b");
    } else {
        println!("a is equal to b");
    }
}
