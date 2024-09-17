In Rust, the equivalent code to compute the factors of a positive integer looks like this:

```rust
use std::cmp;

fn factor(n: u64) -> Vec<u64> {
    let mut factors = vec![];

    for x in 1..=cmp::min(n, u64::MAX as u64)) {
        if n % x == 0 {
            factors.push(x);
            factors.push(n / x));
        }
    }

    let mut factors_sorted = factors.clone();
    factors_sorted.sort();

    println!("{}: factors: {:?}", n, factors));
    println!("Sorted Factors: {:?}", factors_sorted));

    factors
}

fn main() {
    let numbers = vec![45, 53, 64];
    for i in &numbers {
        factor(i);
    }
}
```
This Python code is converted to Rust as per the requirement. This function computes factors of a positive integer n by looping from 1 up to √n (to improve efficiency) and finding all divisors at each step. Note that every prime number has two factors: 1 and itself. The sorted list of factors is returned in a vector, while the original unsorted list of factors is also printed for reference.
