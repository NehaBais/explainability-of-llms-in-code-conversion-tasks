use std::io;

fn main() {
    println!("Enter two integers:");
    let mut a = io::stdin().read_line().expect("Failed to read line");
    a.pop(); // remove the newline character at the end

    let mut b = io::stdin().read_line().expect("Failed to read line");
    b.pop(); // remove the newline character at the end

    let a: i32 = a.trim().parse().expect("Invalid integer input for a");
    let b: i32 = b.trim().parse().expect("Invalid integer input for b");

    if a < b {
        println!("{} is less than {}", a, b);
    } else if a == b {
        println!("{} is equal to {}", a, b);
    } else {
        println!("{} is greater than {}", a, b);
    }
}
