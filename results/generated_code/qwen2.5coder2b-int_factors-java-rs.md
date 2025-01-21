To convert the given Java code to Rust, you can use a similar approach. Here's how you can do it:

```rust
use std::collections::HashSet;

fn factors(n: u64) -> HashSet<u64> {
    let mut factors = HashSet::new();
    if n == 1 {
        return factors;
    }
    factors.insert(n);
    for test in (2..=((n as f64).sqrt() as u64)) {
        if n % test == 0 {
            factors.insert(test);
            factors.insert(n / test);
        }
    }
    factors
}

fn main() {
    let number = 18;
    let result = factors(number);
    println!("Factors of {}: {:?}", number, result);
}
```

In the Rust code:
- We use `HashSet` to store the factors, as it provides efficient lookup and insertion operations.
- We check if the input number is 1 because the factors of 1 are just 1 itself, but we don't need a separate case for this in Rust.
- We iterate from 2 to the square root of the number (inclusive) to find potential divisors. For each divisor `test`, if it divides `n` evenly (`n % test == 0`), we add both `test` and `n / test` to the set of factors.
- Finally, we print out the factors of the given number.

This Rust function will compute and return the factors of any positive integer.
