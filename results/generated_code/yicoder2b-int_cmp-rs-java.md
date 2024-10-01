This code is written in Rust. Here's how it does the task you asked for:

```rust
use std::io;
fn main() -> io::Result<()> {
    println!("Enter two integers:");

    let mut reader = io::stdin();
    let mut buffer = String::new();

    match reader.read_line(&mut buffer) {
        Ok(()) => {},
        Err(_e) => println!("Not a valid number"),
    } 

    if let Err(e) = buffer.parse::<i32>() {
        println!("Error reading input: {}", e);
        return Ok(();
    }
    let nums = (0, &buffer.trim() as i32);
    let a: i32 = *nums;
    
    println!("Enter another integer:");
    match reader.read_line(&mut buffer) {
        Ok(()) => {},
        Err(_e) => println!("Not a valid number"), 
    }
    if let Err(e) = buffer.parse::<i32>() {
        println!("Error reading input: {}", e);
        return Ok(();
    }
    let b: i32 = *buffer as i32;
    
    match a.cmp(&b) {
        std::cmp::Ordering::Less => println!("{} is less than {}", a, b),
        std::cmp::Ordering::Equal => println!("{} equals {}", a, b),
        std::cmp::Ordering::Greater => println!("{} is greater than {}", a, b),
    }

    return Ok(();
}
```
This Rust program works as follows: it takes two integer inputs from the user. The first one is compared to the second integer, and the results are printed out based on the comparison result. If either of the input fails or if they're not integers, an appropriate error message will be printed.
