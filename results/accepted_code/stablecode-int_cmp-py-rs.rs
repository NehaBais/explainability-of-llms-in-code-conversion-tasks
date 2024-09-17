use std::io;

fn main() {
    let mut a = String::new();
    println!("Enter value of a: ");
    io::stdin().read_line(&mut a)).expect("Failed to read line");

    let mut b = String::new();
    println!("Enter value of b: ");
    io::stdin().read_line(&mut b))).expect("Failed to read line");

    if let Ok(a) = a.trim().parse::<i32>() {
        if let Ok(b) = b.trim().parse::<i32>() {
            if a < b {
                println!("a is less than b")
            } else if a > b {
                println!("a is greater than b")
            } else {
                println!("a is equal to b")
            }
        }
    }
}