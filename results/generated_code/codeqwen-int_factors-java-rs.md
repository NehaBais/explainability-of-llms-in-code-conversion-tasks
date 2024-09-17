In Rust, you can convert the Java code to a function like so:

```rust
use std::collections::BTreeSet;

fn factors(n: u64) -> BTreeSet<u64> {
    let mut factors = BTreeSet::new();
    factors.insert(n);
    factors.insert(1);

    for test in (2..=((n as f64).sqrt() as u64)) {
        if n % test == 0 {
            factors.insert(test);
            factors.insert(n / test);
        }
    }

    factors
}
```

This Rust function works in the same way as your Java function - it returns a `BTreeSet<u64>`, which is a sorted set of unique values, and it computes the factors up to the square root of n (rounded down) since every factor greater than this has a corresponding factor less than or equal to the square root.
