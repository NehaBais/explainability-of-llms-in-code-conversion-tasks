Sure, here's the equivalent Rust code:
```rust
use std::io;

fn main() {
    let stdin = io::stdin();

    println!("Enter two integers:");

    // Read first integer from user
    let mut nbr1 = String::new();
    stdin.read_line(&mut nbr1).expect("Failed to read line");
    
    // Read second integer from user
    let mut nbr2 = String::new();
    stdin.read_line(&mut nbr2).expect("Failed to read line");

    if nbr1.trim().parse::<i32>().unwrap() < nbr2.trim().parse::<i32>().unwrap() {
        println!("{} is less than {}", nbr1, nbr2);
    }
    
    if nbr1.trim().parse::<i32>().unwrap() > nbr2.trim().parse::<i32>().unwrap() {
        println!("{} is greater than {}", nbr1, nbr2);
    }

    if nbr1.trim().parse::<i32>().unwrap() == nbr2.trim().parse::<i32>().unwrap() {
        println!("{} is equal to {}", nbr1, nbr2);
    }
}
```
This Rust code reads two integers from the user and then uses conditional statements to display a message indicating which comparison operator was used in each case.
Note that this code uses `std::io` for input/output operations and `expect()` function to handle potential errors while reading lines.
