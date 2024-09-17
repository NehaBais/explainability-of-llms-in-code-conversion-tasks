 ```rust
use std::io;

fn main() {
    println!("Enter value of a");
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    let a: i32 = input.trim().parse().unwrap();

    println!("Enter value of b");
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    let b: i32 = input.trim().parse().unwrap();

    if a < b {
        println!("a is less than b");
    } else if a > b {
        println!("a is greater than b");
    } else if a == b {
        println!("a is equal to b");
    } 
}
```
