 In Rust, you can use a `HashSet` from the standard library to achieve the same functionality as `TreeSet` in Java. The `HashSet` data structure is similar to `TreeSet`, but it uses a hash function to efficiently store and retrieve elements. Here's how your code would look in Rust:

```rust
use std::collections::HashSet;

fn factors(n: i64) -> HashSet<i64> {
    let mut factors = HashSet::new();
    factors.insert(n);
    factors.insert(1);
    for test in (2..n).step_by(-1) {
        if n % test == 0 {
            factors.insert(test);
            factors.insert(n / test);
        }
    }
    return factors;
}
```
Just as with Java, this code calculates the factors of an integer `n` by dividing it by all smaller numbers and checking if the result is a factor of `n`. For each found factor, it adds it to the `HashSet` along with the corresponding division.
