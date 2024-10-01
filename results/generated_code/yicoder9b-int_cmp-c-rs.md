Here's how you can write the equivalent code in Rust.
The equivalent code in Rust:

```rust
use std::io;

fn main() {
    let mut a = String::new();
    let mut b = String::new();

    println!("Please enter two integers:");

    io::stdin().read_line(&mut a).expect("Failed to read line");
    io::stdin().read_line(&mut b).expect("Failed to read line");

    let a: i32 = a.trim().parse().expect("Please type a number!");
    let b: i32 = b.trim().parse().expect("Please type a number!"); 

    if a < b {
        println!("{} is less than {}", a, b);
    }

    else if a == b {
        println!("{} is equal to {}", a, b);
    }

    else  {
        println!("{} is greater than {}", a, b); 
    }
}
```
In this Rust code:
- `std::io` is used for getting input from the user.
- `read_line()` function reads line from the standard input.
- `parse()` is used to convert string into integer.
- The condition statements are written in if, else if and else format respectively.
