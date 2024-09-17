In Rust, we don't have TreeSet like in Java, but similar data structure called "HashSet" provided by Rust's standard library.

Here is the equivalent Rust code:

```rust
use std::collections::HashSet;

fn factors(n: i64) -> HashSet<i64> {
    let mut factors = n.to_string().parse::<i64>().unwrap()().into_iter().collect::<HashSet<i64>>>();
    factors.insert(1);
    factors.insert(n);

    for test in ((n as f64).sqrt() as i64)..=((n as f64).sqrt() as i64).rev() {
        if n % test == 0 {
            factors.insert(test);
            factors.insert(n / test);
        }
    }
    return factors;
}
```
Note that `unwrap()` is used just for simplicity, in actual Rust code you should handle potential errors properly.
