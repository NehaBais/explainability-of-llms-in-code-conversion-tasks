The error messages are indicating that `writeln!()` macro, which is used to print formatted output on standard output, cannot be used with a string slice (i.e., `&str`). This is because the `writeln!` macro needs an instance of type that implements Write trait and not just any string slice.

In Rust, use `println!()` or `print!()` macros instead for writing to standard output. Also, we need to import `std::io::Write` feature. 

Here is the corrected version:
```rust
use std::io;

fn main() {
    let mut nbr1 = String::new();
    let mut nbr2 = String::new();

    // Read number 1 from standard input
    println!("Enter the first number:"); // Use println instead of writeln
    io::stdin().read_line(&mut nbr1).expect("Failed to read line");

    // Read number 2 from standard input
    println!("Enter the second number:"); // Use println instead of writeln
    io::stdin().read_line(&mut nbr2).expect("Failed to read line");

    let nbr1: i32 = nbr1.trim().parse().expect("Please type a number!");
    let nbr2: i32 = nbr2.trim().parse().expect("Please type a number!");

    if nbr1 < nbr2 {
        println!("{} is less than {}", nbr1, nbr2);
    } else if nbr1 > nbr2 {
        println!("{} is greater than {}", nbr1, nbr2);
    } else {
        println!("{} is equal to {}", nbr1, nbr2);
    }
}
```
