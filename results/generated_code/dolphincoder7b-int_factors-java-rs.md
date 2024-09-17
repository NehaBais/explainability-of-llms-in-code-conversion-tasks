Rust does not have a built-in TreeSet data structure. However, we can use the BTreeMap from Rust's standard library to perform the task of storing and returning unique factors in ascending order.

Here is the modified code:

```rust
use std::collections::BTreeMap;

fn factors(n: i64) -> BTreeMap<i64, bool> {
    let mut factors = BTreeMap::<i64, bool>::new();

    for test in 1..=((n as f64).sqrt() as i64) {
        if n % test == 0 {
            factors.insert(test, true);
            factors.insert(-test, true); // For negative numbers
            factors.insert(n / test, true);
            factors.insert(-(n / test), true); // For negative numbers
        }
    }

    factors
}

fn main() {
    let n = 12345678;
    println!("{:?}", factors(n));
}
```
This will print the list of factors in ascending order.
