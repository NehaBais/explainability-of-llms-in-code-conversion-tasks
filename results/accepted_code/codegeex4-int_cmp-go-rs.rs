use std::io;

fn main() {
    let mut n1 = String::new();
    println!("Enter number:");
    io::stdin().read_line(&mut n1).expect("Failed to read line");
    let n1: i32 = match n1.trim().parse() {
        Ok(num) => num,
        Err(_) => {
            println!("Please enter a valid integer.");
            return;
        }
    };

    let mut n2 = String::new();
    println!("Enter number:");
    io::stdin().read_line(&mut n2).expect("Failed to read line");
    let n2: i32 = match n2.trim().parse() {
        Ok(num) => num,
        Err(_) => {
            println!("Please enter a valid integer.");
            return;
        }
    };

    if n1 < n2 {
        println!("{} less than {}", n1, n2);
    } else if n1 == n2 {
        println!("{} equal to {}", n1, n2);
    } else {
        println!("{} greater than {}", n1, n2);
    }
}
