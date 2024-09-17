 Here's the equivalent Rust code:

```rust
use std::io;

fn main() -> io::Result<()> {
    let mut input = String::new();

    // Read two integers from user
    print!("Enter first integer: ");
    io::stdin().read_line(&mut input)?;
    let nbr1: i32 = input.trim().parse()?;

    print!("Enter second integer: ");
    io::stdin().read_line(&mut input)?;
    let nbr2: i32 = input.trim().parse()?;

    // Check if the first integer is less than, equal to or greater than the second integer
    match nbr1 {
        nbr1 if nbr1 < nbr2 => println!("{} is less than {}", nbr1, nbr2),
        nbr1 if nbr1 > nbr2 => println!("{} is greater than {}", nbr1, nbr2),
        _ => println!("{} is equal to {}", nbr1, nbr2),
    };

    Ok(())
}
```

This Rust code reads two integers from the user and checks if the first integer is less than, equal to or greater than the second one. It uses a `match` statement instead of `if-else` for clearer and more idiomatic Rust code. The `io::Result<()>` return type is used in order to handle potential IO errors that might arise during reading from standard input.
