 To convert the given Java code for computing the factors of a positive integer to Rust, we need to follow these steps:

1. Create a function that takes a `u64` (unsigned long long) as an argument.
2. Use a `HashSet` to store unique factors since Rust's standard library does not have a `TreeSet`.
3. Add the number itself and 1 to the set initially.
4. Iterate from `n - 1` down to the square root of `n`, adding divisors to the set if they are factors.
5. Return the set of factors.

Here is the Rust code that performs these steps:

```rust
use std::collections::HashSet;

fn factors(n: u64) -> HashSet<u64> {
    let mut factors = HashSet::new();
    factors.insert(n);
    factors.insert(1);
    
    for test in (1..).take_while(|&x| x * x <= n) {
        if n % test == 0 {
            factors.insert(test);
            let other_factor = n / test;
            if other_factor != test {
                factors.insert(other_factor);
            }
        }
    }
    
    factors
}

fn main() {
    let number = 28;
    let factor_set = factors(number);
    println!("Factors of {} are: {:?}", number, factor_set);
}
```

This Rust code defines a function `factors` that computes the factors of a given positive integer. It uses a `HashSet<u64>` to store unique factors and iterates from 1 up to the square root of the number (inclusive). The main function demonstrates how to use this `factors` function with an example number, in this case, 28.
