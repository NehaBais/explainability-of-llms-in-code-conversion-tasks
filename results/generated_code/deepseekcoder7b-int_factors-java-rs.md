In Rust, you can use the `Vec` and `binary_search::downward` to calculate the factors of a positive integer like this:

```rust
use std::cmp::Ordering;

fn factors(n: u64) -> Vec<u64> {
    let mut factors = vec![n, 1];
    for test in (2..((n as f64).sqrt() as u64 + 1)).rev() {
        match n.checked_rem(test).map_or(false, |r| r == 0) {
            true => factors.push(test),
            false => {}
        }
        if let Some(idx) = factors.binary_search(&n/test) {
            factors.insert(idx + 1, n / test);
        } else {
            match factors.binary_search_by(|f| f.cmp(&n/test)) {
                Ok(_) => {}
                Err(e) => {
                    if let Ordering::Less = &factors[e] {
                        return factors;
                    } else {
                        factors.insert(e, n / test);
                    }
                }
            }
        }
    }
    factors.dedup();
    factors
}
``` 
In this Rust code: 
- We first initialize a vector with the number `n` and `1` as its elements. 
- Then we iterate from `n - 1` to square root of n (both inclusive), checking if it is factor by checking for division remainder. If so, add that into factors list.
- Afterwards, we try to find the position where a number greater than test would be inserted while maintaining sorted order and insert the quotient of `n / test` at that location in vector. 
- Finally, we remove duplicates from the array with built-in `dedup()` method before returning it. Please note that Rust handles underflow cases implicitly unlike Java so there is no need to check for underflow condition as done in Java code.

