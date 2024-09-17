Here's the Rust code that computes the factors of a positive integer:
```
use std::collections::BTreeSet;
pub fn factors(n: u64) -> BTreeSet<u64> {
 let mut factors = BTreeSet::new();
 factors.insert(n);
 factors.insert(1);
 for test in (0..(n as f64).sqrt().floor() as u64 + 1).rev() {
 if n % test == 0 {
 factors.insert(test);
 factors.insert(n / test);
 }
 }
 factors
}
```
This code uses a BTreeSet from the std::collections module to store the factors. The loop iterates over all numbers from the square root of n down to 1, checking if each number divides n evenly. If it does, that number is added to the set of factors. Note that this implementation assumes that n is a positive integer.

