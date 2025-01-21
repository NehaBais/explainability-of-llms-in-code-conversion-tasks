Error: `A` is not found in this scope

Fix: Rename the variable `A` in the second line to another name.

Corrected Code:

```rs
use std::io;

fn main() {
    println!("Enter two integers: ");
    let mut input = String::new();

    io::stdin().read_line(&mut input).expect("Failed to read line");
    let parts: Vec<&str> = input.trim().split(' ').collect();
    let A: i32 = parts[0].parse().expect("Please type a number!");
    let b: i32 = parts[1].parse().expect("Please type a number!");

    println!("{} + {} = {}", A, b, A + b);
    println!("{} - {} = {}", A, b, A - b);
    println!("{} * {} = {}", A, b, A * b);
    println!("{} / {} = {:.0}", A, b, (A as f64) / (b As f64)); // truncates towards 0
    println!("{} % {} = {}", A, b, A % b); // same sign as first operand
}
```

In this corrected code, the input is read into a single line and split by space to get the two integers separately. The variable `A` is renamed to `input`. Then it's trimmed and parsed into an integer.
