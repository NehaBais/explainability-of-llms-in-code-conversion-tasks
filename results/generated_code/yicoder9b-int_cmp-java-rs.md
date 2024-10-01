In Rust, the standard library doesn't have a BufferedReader for reading from stdin like in Java. Instead, we can use std::io::stdin and readline function to get user input. Here is the equivalent code in Rust:
```rust
use std::io::{self, Write};

fn main() {
    let mut nbr1 = String::new();
    let mut nbr2 = String::new();

    // Read number 1 from standard input
    writeln!("Enter the first number:").unwrap();
    io::stdin().read_line(&mut nbr1).expect("Failed to read line");

    // Read number 2 from standard input
    writeln!("Enter the second number:").unwrap();
    io::stdin().read_line(&mut nbr2).expect("Failed to read line");

    let nbr1: i32 = nbr1.trim().parse().expect("Please type a number!"); 
    let nbr2: i32 = nbr2.trim().parse().expect("Please type a number!"); 

    if nbr1 < nbr2 {
        println!("{} is less than {}",nbr1,nbr2) ;
    } else if nbr1 > nbr2 {
        println!("{} is greater than {}",nbr1,nbr2);
    } else { 
        println!("{} is equal to {}",nbr1,nbr2);
    }
}
```
