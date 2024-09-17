```rust
use std::env;

fn main() {
    let args: Vec<String> = env::args().collect();

    let a = args[2].parse::<i32>().unwrap();
    let b = args[3].parse::<i32>().unwrap();

    let sum = a + b;
    let difference = a - b;
    let product = a * b;
    let division = a / b;
    let remainder = a % b;

    println!("a + b = {}", sum);
    println!("a - b = {}", difference);
    println!("a * b = {}", product);
    println!("a / b = {}", division);
    println!("a % b = {}", remainder);
}
```
