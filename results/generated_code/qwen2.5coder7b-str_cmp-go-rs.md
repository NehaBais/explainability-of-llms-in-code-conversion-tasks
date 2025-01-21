Here's how you can convert the given Golang code to Rust:

```rust
fn main() {
    let c = "cat";
    let d = "dog";

    if c == d {
        println!("{} is bytewise identical to {}", c, d);
    }
    if c != d {
        println!("{} is bytewise different from {}", c, d);
    }
    if c > d {
        println!("{} is lexically bytewise greater than {}", c, d);
    }
    if c < d {
        println!("{} is lexically bytewise less than {}", c, d);
    }
    if c >= d {
        println!("{} is lexically bytewise greater than or equal to {}", c, d);
    }
    if c <= d {
        println!("{} is lexically bytewise less than or equal to {}", c, d);
    }

    let case_sensitive_eq = "when interpreted as UTF-8 and compared under Unicode simple case folding rules.";
    if c.eq_ignore_ascii_case(d) {
        println!("{} equal to {} {}", c, d, case_sensitive_eq);
    } else {
        println!("{} not equal to {} {}", c, d, case_sensitive_eq);
    }

    // For other kinds of string comparisons that interpret UTF-8,
    // Rust's standard library provides the unicode_segmentation crate.
    // The unicode-segmentation crate provides functions for Unicode segmentation
    // and allows you to implement your own comparison logic if needed.
}
```

In Rust, string comparison is handled using the `==`, `!=`, `<`, `>`, `<=`, and `>=` operators. It is case-sensitive by default.

Rust does not provide a direct way to perform a case-insensitive comparison like Go's `strings.EqualFold()`. Instead, you can use the `eq_ignore_ascii_case()` method on string slices (`&str`). This method ignores ASCII case when comparing strings.

For more advanced Unicode-aware string comparisons, Rust provides the `unicode-segmentation` crate which provides functions for Unicode segmentation. You can implement your own comparison logic if needed using these functions.
