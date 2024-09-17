```rust
use std::io;

fn main() {
    let mut a = String::new();
    let mut b = String::new();

    println!("Enter two integers separated by a space: ");

    io::stdin()
        .read_line(&mut a)
        .expect("Failed to read line");

    io::stdin()
        .read_line(&mut b)
        .expect("Failed to read line");

    let a: i32 = a.trim().parse().expect("Invalid input");
    let b: i32 = b.trim().parse().expect("Invalid input");

    if a == b {
        println!("{} equals {}", a, b);
    } else if a < b {
        println!("{} is less than {}", a, b);
    } else {
        println!("{} is greater than {}", a, b);
    }
}
```
