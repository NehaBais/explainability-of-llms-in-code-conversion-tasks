The error in a single line is: `error: mismatched closing delimiter: `)``.
To fix this, we need to remove any unexpected closing delimiters from our code. In this case, the extra closing delimiter is `)` which is already closed at line 6 (`io::stdin().read_line(&mut input)).expect("Failed to read from input");`).
Here's the corrected code in a single code block:
```rust
use std::io;

fn main() {
    let mut input = String::new();

    io::stdin().read_line(&mut input)).expect("Failed to read from input");

    let nbr1: i32 = match input.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Invalid integer"),
    };

    input.clear();

    io::stdin().read_line(&mut input)).expect("Failed to read from input");

    let nbr2: i32 = match input.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Invalid integer"),
    };

    println!(
        "{} is {} than {}", 
        nbr1, if nbr1 < nbr2 {"less than"}, if nbr1 > nbr2 {"greater than"}, or if nbr1 == nbr2 {"equal to"}
    }
}
```
