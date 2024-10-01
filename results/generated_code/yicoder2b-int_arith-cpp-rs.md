Sure, here is the equivalent code in Rust. Note that for this solution to work, the `std::op` module needs to be included for all operations:

```rust
use std::cmp::Ordering;

fn main() {
    let mut a = input("Enter first number:").unwrap();
    let mut b = input("Enter second number:").unwrap();

    println!("a+b = {}", &a + &b);
    println!("a-b = {}", &a - &b);
    println!("a*b = {}", a * b);
    if let result = &a / &b {
        println!("a/b = {}, remainder {}", result.to_string(), &result % b);
    } else {
        panic!("Division by zero!")
    };
}

fn input<T>(msg: &str) -> Option<T> where T : std::ops::Add<Output = i32> + FromStr {
    let input = read_line().unwrap();
    if let v = input.trim().parse() {
        Some(v)
    } else {
        println!("{} is not a number!", input);
        None 
    }
}
```
Please note that the division operation `/` rounds towards zero if both operands have the same sign. The remainder operator `%` returns the sign of the first operand if they are different and its sign is the opposite if not. For negative numbers, Rust uses the IEEE-like rules for rounding and taking modulo.
