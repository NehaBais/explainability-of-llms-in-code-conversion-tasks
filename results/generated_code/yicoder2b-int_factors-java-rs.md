Sure, here is the equivalent code in Rust:

```rust
use std::collections::BTreeSet;

fn main() {
    let mut factors = BTreeSet::new();
    factors.insert(1);
    let n = 5; // or any other number you want to factorize
    for test in (2..=n).rev() {
        if n % test == 0 {
            factors.insert(test);
            factors.insert((n as f64 / test) as u64); // this is necessary because we are working with unsigned integers
        }
    }
    println!("{:?}", factors);
}
```
This program will calculate the prime numbers that divide the number you input and prints them in sorted order.
Note: This Rust version uses BTreeSet instead of TreeSet from Java to keep the factors in sorted order, which is necessary for output purposes.
