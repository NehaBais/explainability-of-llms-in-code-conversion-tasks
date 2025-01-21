 Certainly! Below is the equivalent Rust code that performs the same functionality as the provided Java code:

```rust
use std::io;

fn main() {
    let mut input1 = String::new();
    let mut input2 = String::new();

    println!("Enter the first integer:");
    io::stdin().read_line(&mut input1).expect("Failed to read line");
    let nbr1: i32 = input1.trim().parse().expect("Please enter a valid integer");

    println!("Enter the second integer:");
    io::stdin().read_line(&mut input2).expect("Failed to read line");
    let nbr2: i32 = input2.trim().parse().expect("Please enter a valid integer");

    if nbr1 < nbr2 {
        println!("{} is less than {}", nbr1, nbr2);
    } else if nbr1 > nbr2 {
        println!("{} is greater than {}", nbr1, nbr2);
    } else {
        println!("{} is equal to {}", nbr1, nbr2);
    }
}
```

This Rust code does the following:
1. Reads two integers from the user.
2. Compares the two integers using conditional statements (`if`, `else if`, and `else`).
3. Prints a message based on the comparison result for each case (less than, equal to, or greater than).
