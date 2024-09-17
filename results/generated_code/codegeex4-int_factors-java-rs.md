```rust
use std::collections::BTreeSet;

pub fn factors(mut n: i64) -> BTreeSet<i64> {
    let mut factors = BTreeSet::new();
    factors.insert(n);
    factors.insert(1);

    for test in (2..((n as f64).sqrt() as i64)).rev() {
        if n % test == 0 {
            factors.insert(test);
            factors.insert(n / test);
        }
    }

    factors
}
```
This Rust code does exactly the same thing as your Java code. It takes an integer `n` and returns a sorted set of its factors. The function uses a mutable BTreeSet, which is ordered by ascending order by default. We start from 2 (the smallest positive integer greater than 1) and go up to the square root of `n`, because we're looking for pairs of factors that multiply to `n`.

Note that Rust does not have long data type as Java, so we use `i64` which is the equivalent of `long` in Java.
