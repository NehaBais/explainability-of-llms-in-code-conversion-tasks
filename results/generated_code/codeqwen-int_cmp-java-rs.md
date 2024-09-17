Here's the equivalent Rust code:

```rust
use std::io;

fn main() {
    loop {
        println!("Enter first integer:");
        let mut nbr1 = String::new();
        nbr1.clear();
        io::stdin().read_line(&mut nbr1).expect("Failed to read line");
        let nbr1: i32 = match nbr1.trim().parse() {
            Ok(num) => num,
            Err(_) => continue,
        };

        println!("Enter second integer:");
        let mut nbr2 = String::new();
        nbr2.clear();
        io::stdin().read_line(&mut nbr2).expect("Failed to read line");
        let nbr2: i32 = match nbr2.trim().parse() {
            Ok(num) => num,
            Err(_) => continue,
        };

        if nbr1 < nbr2 {
            println!("{} is less than {}", nbr1, nbr2);
        } else if nbr1 > nbr2 {
            println!("{} is greater than {}", nbr1, nbr2);
        } else {
            println!("{} is equal to {}", nbr1, nbr2);
        }

        break;
    }
}
```

The code does the same as the Java code: it reads two integers from the user and then outputs a message based on their comparison. The 'continue' keyword skips over an iteration if a conversion to an integer fails, preventing an error if the user enters something that can't be parsed into an integer.
