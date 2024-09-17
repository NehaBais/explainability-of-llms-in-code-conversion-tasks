The equivalent code in Rust would be as follows:

```rust
use std::io;

fn main() {
    let mut input = String::new();
    println!("Enter number:");
    io::stdin().read_line(&mut input).expect("Failed to read line");
    let n1: i32 = match input.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Please enter a valid integer"),
    };

    input.clear();
    println!("Enter number:");
    io::stdin().read_line(&mut input).expect("Failed to read line");
    let n2: i32 = match input.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Please enter a valid integer"),
    };

    if n1 < n2 {
        println!("{} is less than {}", n1, n2);
    } else if n1 == n2 {
        println!("{} Is equal to {}", n1, n2);
    } else {
        println!("{} Is greater than {}", n1, n2);
    }
}
```

This Rust code is doing the same thing as your Go program: it reads two integers from the user, then prints out a message depending on their comparison. The main difference is that Rust doesn't have a built-in way to check if a string can be parsed into an integer without panicking (which Go does). Instead, you need to explicitly handle the `Result` of `parse`, which contains either the converted number or an error. If the conversion fails, it will panic with a message "Please enter a valid integer".
