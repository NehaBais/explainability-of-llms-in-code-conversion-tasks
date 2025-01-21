Here is the equivalent code in Rust:

```rust
use std::io;

fn main() {
    let mut input = String::new();

    println!("Enter first number: ");
    io::stdin().read_line(&mut input).expect("Failed to read line");
    let n1: i32 = input.trim().parse().expect("Please type a number!");

    input.clear();  // Clear the buffer

    println!("Enter second number: ");
    io::stdin().read_line(&mut input).expect("Failed to read line");
    let n2: i32 = input.trim().parse().expect("Please type a number!");

    if n1 < n2 {
        println!("{} less than {}", n1, n2);
    } else if n1 == n2 {
        println!("{} equal to {}", n1, n2);
    } else {
        println!("{} greater than {}", n1, n2);
    }
}
```

The `expect` method is used instead of `log.Fatal` since Rust doesn't have a direct equivalent. If an error occurs while trying to parse the input into an integer, it will panic with an error message passed as parameter to `expect`.

Also note that in Rust, we clear the buffer after reading the first number before reading the second one, otherwise the buffer would still contain the newline character from the first input which can cause issues while parsing the second input.
