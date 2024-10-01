Here is the equivalent code in Rust:

```rust
use std::collections::BTreeSet; 

fn factors(n: u64) -> BTreeSet<u64> {
    let mut factors = BTreeSet::new();
    factors.insert(n);
    factors.insert(1);

    for test in (2..((n as f64).sqrt() as u64)).rev() {
        if n % test == 0 {
            factors.insert(test);
            factors.insert(n / test);
        }
    }
    return factors;
}
```
This Rust code accomplishes the same task as your Java example. It calculates the factors of a number by iterating down from one less than the given number to the square root of that number (inclusive), and checks if the current number is a divisor. If it is, both divisors are added to an ordered set (BTreeSet in Rust). Finally, the BTreeSet containing all factors is returned.

The main differences between this Rust code and your Java example:
- The use of `BTreeSet` instead of `TreeSet`: Rust's `BTreeSet` maintains a sorted order while adding elements.
- The use of `std::collections::BTreeSet` import statement in the Rust version, which is similar to using `java.util.*;` in Java.
- The type annotation for n: u64 instead of long. Rust has explicit type annotations and does not perform implicit conversions between types (unlike Java). 
- Additionally, there's no need for a cast or conversion when converting from f64 to u64 because the sqrt function in f64 always returns a floating point number which can be converted into an unsigned integer with the as keyword.
