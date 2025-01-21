Here is the equivalent Rust code:

```rust
use std::collections::BTreeSet;

pub fn factors(n: u64) -> BTreeSet<u64> {
    let mut factors = BTreeSet::new();
    factors.insert(n);
    factors.insert(1u64);

    for test in (1..=((n as f64).sqrt() as u64)).rev() {
        if n % test == 0 {
            factors.insert(test);
            factors.insert(n / test);
        }
    }

    factors
}
```

This function `factors` takes a positive integer `n` and returns a `BTreeSet<u64>` which contains all of the divisors of `n`. It starts by inserting `n` and `1` into the set, as every number is divisible by itself and one. Then it iterates from `n-1` down to 1 (but only up to the square root of `n`), checking if `test` divides `n` evenly. If it does, then both `test` and `n/test` are added to the set.
