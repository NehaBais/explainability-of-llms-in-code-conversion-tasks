Sure, here is the equivalent Rust code for your Go program. 

Note that Rust does not have a built-in `fmt.Scan` method like Golang, so I used `std::io` crate for input/output operations.

```rust
use std::io::{self, Result};

fn main() -> Result<()> {
    let mut n1 = String::new();
    let mut n2 = String::new();

    println!("Enter number: ");
    io::stdin().read_line(&mut n1)?;
    println!("Enter number: ");
    io::stdin().read_line(&mut n2)?;

    // Remove the newline character from the input
    n1.pop();
    n2.pop();

    match (n1.parse::<i32>(), n2.parse::<i32>()) {
        Ok((n1, n2)) => {
            if n1 < n2 {
                println!("{} is less than {}", n1, n2);
            } else if n1 == n2 {
                println!("{} is equal to {}", n1, n2);
            } else {
                println!("{} is greater than {}", n1, n2);
            }
        },
        Err(e) => eprintln!("Error parsing input: {}", e),
    }

    Ok(())
}
```

The `io::stdin().read_line` function reads a line of text from the standard input and stores it in a mutable string. The `pop()` method removes the last character (newline character) which is not needed for parsing.

The `parse::<i32>()` function parses the string into an integer. If the parsing fails, it returns an error which is handled by the `Err` case of the `match` statement.

In addition, note that this program will not terminate if there is a problem with reading input from the user (e.g., due to a timeout or other user interruption). It would be better to add a loop around this logic and handle any errors that occur.
