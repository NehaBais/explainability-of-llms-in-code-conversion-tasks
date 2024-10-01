In Rust, the code would look like this:

```rust
fn main() {
    let c = "cat";
    let d = "dog";

    if c == d {
        println!("{} is bytewise identical to {}", c, d);
    } else {
        println!("{} is bytewise different from {}", c, d);
    }

    if c < d {
        println!("{} is lexically bytewise less than {}", c, d);
    } else if c > d {
        println!("{} is lexically bytewise greater than {}", c, d);
    } else if c <= d {
        println!("{} is lexically bytewise less than or equal to {}", c, d);
    } else if c >= d {
        println!("{} is lexically bytewise greater than or equal to {}", c, d);
    }

    // Rust does not inherently support case-insensitive string comparison. However, we can use the `to_lowercase()` method for that:

    if c.to_lowercase() == d.to_lowercase() {
        println!("{} is case insensitively equal to {}", c, d);
    } else {
        println!("{} is not case insensitively equal to {}", c, d);
    }

    // Rust doesn't have a direct comparison between string and numeric type like Go. 

    // For other kinds of string comparisons such as Unicode normalization, collation tables and locale sensitive comparisons we can use the 'unicode-segmentation' crate for normalizing Unicode strings and the 'unicode-bidi' crate for handling bidirectional text
}
```
Please note that `to_lowercase()` method converts all characters in a string to their corresponding lower case, so it can be used as an alternative to perform a case insensitive comparison. However, please install the necessary crates before using them:

Add this into your Cargo.toml file:

[dependencies]
unicode-segmentation = "1"
unicode-bidi = "0.6.5"
