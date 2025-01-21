 Certainly! Below is the Rust equivalent of the provided Golang code, demonstrating various string comparisons:

```rust
fn main() {
    let c = "cat";
    let d = "dog";

    // Comparing two strings for exact equality
    if c == d {
        println!("{} is bytewise identical to {}", c, d);
    } else {
        println!("{} is not equal to {}", c, d);
    }

    // Comparing two strings for inequality (i.e., the inverse of exact equality)
    if c != d {
        println!("{} is bytewise different from {}", c, d);
    } else {
        println!("{} is equal to {}", c, d);
    }

    // Comparing two strings to see if one is lexically ordered before than the other
    match c.cmp(&d) {
        std::cmp::Ordering::Less => println!("{} is lexically less than {}", c, d),
        std::cmp::Ordering::Equal => println!("{} is equal to {}", c, d),
        std::cmp::Ordering::Greater => println!("{} is lexically greater than {}", c, d),
    }

    // Comparing two strings to see if one is lexically ordered after than the other
    match c.cmp(&d) {
        std::cmp::Ordering::Less => println!("{} is lexically less than {}", c, d),
        std::cmp::Ordering::Equal => println!("{} is equal to {}", c, d),
        std::cmp::Ordering::Greater => println!("{} is lexically greater than {}", c, d),
    }

    // Case insensitive comparison using `to_lowercase` and `eq`
    let eqf = "when interpreted as UTF-8 and compared under Unicode simple case folding rules.";
    if c.to_lowercase() == d.to_lowercase() {
        println!("{} equal to {} {}", c, d, eqf);
    } else {
        println!("{} not equal to {} {}", c, d, eqf);
    }
}
```

### Explanation:
1. **Exact Equality and Inequality**: Rust uses the `==` and `!=` operators for exact equality and inequality respectively.
2. **Lexical Comparison**: Rust uses the `cmp` method on strings which returns an `Ordering` enum (`Less`, `Equal`, `Greater`). This allows for easy comparison of strings lexically.
3. **Case Insensitive Comparison**: In Rust, you can convert strings to lowercase using `to_lowercase` and then compare them with the `eq` method.
4. **Numeric Strings**: Rust treats numeric strings differently from string literals because it is a statically typed language. If you have numeric types mixed in string comparisons, they will not be treated lexically unless explicitly converted to the appropriate type.

This Rust code provides similar functionality and demonstrates how to handle various types of string comparisons while adhering to Rust's strong typing principles.
