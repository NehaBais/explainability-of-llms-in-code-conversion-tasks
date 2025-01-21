 Sure! Below is the Rust equivalent of the provided C++ code. The Rust code demonstrates various string comparisons including case-sensitive and case-insensitive comparison, as well as numeric comparisons.

```rust
use std::cmp::Ordering;
use std::io::{self, Write};
use std::str::FromStr;

fn demo_compare<T: std::fmt::Display + PartialEq + PartialOrd>(a: T, b: T, semantically: &str) {
    println!(
        "{} and {} are {}exactly equal.",
        a,
        b,
        if a == b { "" } else { "not " }
    );

    println!(
        "{} and {} are {}equal.",
        a,
        b,
        if a != b { "not " } else { "" }
    );

    println!(
        "{} is {}lexically ordered before {}.",
        a,
        if a < b { "" } else { "not " },
        b
    );

    println!(
        "{} is {}lexically ordered after {}.",
        a,
        if a > b { "" } else { "not " },
        b
    );
}

fn main() {
    let args: Vec<String> = std::env::args().collect();
    let a = args.get(1).map_or("1.2.Foo".to_string(), |arg| arg.clone());
    let b = args.get(2).map_or("1.3.Bar".to_string(), |arg| arg.clone());

    // Case-sensitive comparisons.
    demo_compare(a.clone(), b.clone(), "lexically");

    // Case-insensitive comparisons by folding both strings to a common case.
    let a_lowercase = a.to_lowercase();
    let b_lowercase = b.to_lowercase();
    demo_compare(a_lowercase, b_lowercase, "lexically");

    // Numeric comparisons; here 'T' could be any type for which the relevant FromStr implementation is defined, eg int, long, etc.
    let mut num_a: f64 = 0.0;
    let mut num_b: f64 = 0.0;
    if a_lowercase.parse::<f64>().is_ok() {
        num_a = a_lowercase.parse::<f64>().unwrap();
    }
    if b_lowercase.parse::<f64>().is_ok() {
        num_b = b_lowercase.parse::<f64>().unwrap();
    }
    demo_compare(num_a, num_b, "numerically");
}
```

### Explanation:
1. **Case-sensitive comparisons**: The strings `a` and `b` are compared directly using the `PartialEq` trait for equality check and the `PartialOrd` trait for comparison.
2. **Case-insensitive comparisons**: Both strings are converted to lowercase using the `to_lowercase` method and then compared lexically.
3. **Numeric comparisons**: The strings representing numbers are parsed into floating-point numbers (`f64`) and compared numerically.

This Rust code should provide similar functionality to the C++ code, demonstrating various string comparison techniques in Rust.
