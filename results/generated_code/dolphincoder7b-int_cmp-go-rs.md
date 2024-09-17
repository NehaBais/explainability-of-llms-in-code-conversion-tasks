This is a simplified version of the code in Golang and requires some improvements to work properly with Rust. Here is the equivalent Rust code.
```rust
use std::io;

fn main() {
    let mut n1 = String::new();
    io::stdin().read_line(&mut n1).expect("Failed to read line");

    let mut n2 = String::new();
    io::stdin().read_line(&mut n2).expect("Failed to read line");

    let n1: i32 = n1.trim().parse().unwrap();
    let n2: i32 = n2.trim().parse().unwrap();

    match (n1, n2) {
        (x, y) if x < y => println!("{} is less than {}", x, y),
        (x, y) if x == y => println!("{} is equal to {}", x, y),
        (x, y) => println!("{} is greater than {}", x, y),
    }
}
```
The above Rust code reads two integers from standard input. It then compares the first integer with each of the other integers using `if let` pattern matching and prints a message based on the comparison. Note that the Rust code uses `io::stdin().read_line(&mut n1)` to read the first line of input, which is a more direct way to get user input compared to using `fmt.Scan()`. The `match` statement allows for multiple conditions to be checked in one case.

Please make sure to test this code thoroughly before running it. It's best to run the program with sample inputs to check that it works correctly.
