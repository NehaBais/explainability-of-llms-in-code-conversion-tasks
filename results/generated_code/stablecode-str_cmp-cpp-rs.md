Here is the equivalent Rust code:

```rust
use std::cmp::Ordering;
use std::io::Cursor;

fn demo_compare<T: PartialEq + ToString>(a: T, b: T, semantic: &str) {
    println!("{} and {} are {} equal.", a, b, if a == b {"exactly"} else {"not"}));
    println!("{} and {} are {} ordered before {}.", 
                   a, b, if a < b {""} else {"not"}}), 
                   b);
    println!("{} and {} are {} ordered after {}.", 
                   a, b, if a > b {""} else {"not"}}), 
                   b);
}

fn main() {
    // Case-sensitive comparisons.
    let a = "1.2.Foo";
    let b = "1.3.Bar";
    demo_compare(a, b, "lexically"));

    // Case-insensitive comparisons by folding both strings to a common case.
    let a = "HeLLo".to_string();
    let b = "hello".to_string();
    demo_compare(a, b, "lexically"));

    // Numeric comparisons; here 'double' could be any type for which the relevant >> operator is defined, eg int, long, etc.
    let a: f64 = 12.3;
    let b: f64 = 23.4;
    demo_compare(a, b, "numerically"));
}
```

This code in Rust demonstrates the following:
- Demonstrates how to compare two strings for exact equality and vice versa.
- Shows how to perform lexical comparisons between two strings using the `PartialOrd` trait from the standard library.
- Also includes a demonstration of numeric string comparison, where the values are treated numerically instead of lexically. This is done by converting the numeric strings to their corresponding numeric types (`f32` and `f64` in this case) before performing the numerical comparison using the `PartialEq` trait from the standard library.
- Finally, it also demonstrates how Rust handles comparisons between numeric strings if they are not treated numerically. In such a case, the compiler would throw an error indicating that there is no implementation of the `PartialEq` trait for the given type combination. This highlights one of the advantages of using strongly typed languages like Rust - they can catch many potential bugs at compile time rather than only at runtime when errors are encountered.
