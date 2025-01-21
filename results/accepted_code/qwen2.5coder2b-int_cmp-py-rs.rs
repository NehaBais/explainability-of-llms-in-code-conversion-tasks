use std::io;

fn main() {
    println!("Enter value of a: ");
    let mut a = String::new();
    io::stdin().read_line(&mut a).expect("Failed to read line");

    println!("Enter value of b: ");
    let mut b = String::new();
    io::stdin().read_line(&mut b).expect("Failed to read line");

    // Remove the newline character from the input
    let a = a.trim_end();
    let b = b.trim_end();

    if a.cmp(b) == std::cmp::Ordering::Less {
        println!("a is less than b");
    } else if a.cmp(b) == std::cmp::Ordering::Equal {
        println!("a is equal to b");
    } else {
        println!("a is greater than b");
    }
}