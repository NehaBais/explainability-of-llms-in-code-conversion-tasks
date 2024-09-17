use std::io;
fn main() {
    println!("Enter two integers:");
    let mut input_a = String::new();
    let mut input_b = String::new();
    io::stdin()
        .read_line(&mut input_a)
        .expect("Failed to read line");
    io::stdin()
        .read_line(&mut input_b)
        .expect("Failed to read line");
    let a: i32 = match input_a.trim().parse() {
        Ok(num) => num,
        Err(_) => {
            println!("Please enter a valid integer for a.");
            return;
        }
    };
    let b: i32 = match input_b.trim().parse() {
        Ok(num) => num,
        Err(_) => {
            println!("Please enter a valid integer for b.");
            return;
        }
    };
    if a < b {
        println!("{} is less than {}", a, b);
    } else if a == b {
        println!("{} is equal to {}", a, b);
    } else {
        println!("{} is greater than {}", a, b);
    }
}
