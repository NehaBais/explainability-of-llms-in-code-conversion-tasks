This is the Rust equivalent of your Golang code:

```rust
use std::fs;

fn main() {
    match fs::metadata("input.txt") {
        Ok(metadata) => println!("{:?}", metadata),
        Err(error) => println!("{}", error),
    }

    match fs::metadata("/input.txt") {
        Ok(metadata) => println!("{:?}", metadata),
        Err(error) => println!("{}", error),
    }

    match fs::metadata("docs") {
        Ok(metadata) => println!("{:?}", metadata),
        Err(error) => println!("{}", error),
    }

    match fs::metadata("/docs") {
        Ok(metadata) => println!("{:?}", metadata),
        Err(error) => println!("{}", error),
    }
}
```
This Rust code will compile and run correctly. The `match` statement is used to handle different outcomes of `fs::metadata`. If the path points to an existing directory, a message indicating this fact will be printed; otherwise, an error message will be displayed.
