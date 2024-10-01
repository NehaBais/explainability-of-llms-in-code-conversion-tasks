 The Rust language does not have a direct equivalent to Go's "==" operator for string comparison because it requires explicit handling of case-sensitivity and bytewise identity. However, the `Ord` trait provides methods that allow us to achieve similar behavior:

Here is the conversion:

```rust
fn main() {
    let c = String::from("cat");
    let d = String::from("dog");

    if c == d {
        println!("{} is identical to {}", &c, &d);
    }

    if c != d {
        println!("{} is different from {}", &c, &d);
    }

    if c < d {
        println!("{} is lexicographically less than {}", &c, &d);
    }

    if c > d {
        println!("{} is lexicographically greater than {}", &c, &d);
    }
    
    // Rust does not have a direct equivalent to Go's `strings.EqualFold`. However,
    // we can use the `.to_lowercase()` method in combination with the `==` operator 
    if c.to_lowercase() == d.to_lowercase() {
        println!("{} is identical to {}", &c, &d);
    } else {
        println!("{} is different from {}", &c, &d);
    }
}
```

This code accomplishes the same tasks as the Go version: it compares two strings for exact equality, inequality, lexical comparison (smaller than, larger than), case insensitive comparisons.
