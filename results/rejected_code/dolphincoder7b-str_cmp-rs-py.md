Rust does not have built-in support for string comparisons, lexical comparisons, or case insensitive comparisons. These features are implemented in external crates such as `rust-unicode-normalization` and `regex`. However, Rust's standard library still provides some functionalities to compare strings that meet your requirements. This includes:

- Comparing two strings for exact equality
```rust
fn main() {
    let a = "abc";
    let b = "Bac".to_owned();

    if a == b {
        println!("The strings are equal");
    } else {
        println!("The strings are not equal");
    }
}
```
- Comparing two strings for inequality (i.e., the inverse of exact equality)
```rust
fn main() {
    let a = "abc";
    let b = "Bac".to_owned();

    if a != b {
        println!("The strings are not equal");
    } else {
        println!("The strings are equal");
    }
}
```
- Comparing two strings to see if one is lexically ordered before than the other
```rust
fn main() {
    let a = "abc";
    let b = "Bac".to_owned();

    if a < b {
        println!("The first string is lexically before the second");
    } else {
        println!("The first string is not lexically before the second");
    }
}
```
- Comparing two strings to see if one is lexically ordered after than the other
```rust
fn main() {
    let a = "abc";
    let b = "Bac".to_owned();

    if a > b {
        println!("The first string is lexically after the second");
    } else {
        println!("The first string is not lexically after the second");
    }
}
```
- How to achieve both case sensitive comparisons and case insensitive comparisons within the language
You can use the `to_ascii_lowercase` or `to_ascii_uppercase` method of `String` to convert a string to ASCII lowercase or uppercase, respectively. Then you can compare these strings for equality or inequality:
```rust
fn main() {
    let a = "abc";
    let b = "Bac".to_owned();

    // Case sensitive comparison
    if a == b {
        println!("The strings are equal");
    } else {
        println!("The strings are not equal");
    }

    // Case insensitive comparison
    let a2 = a.to_ascii_lowercase();
    let b2 = b.to_ascii_lowercase();
    if a2 == b2 {
        println!("Both strings are equal when ignoring case");
    } else {
        println!("Strings are not equal when ignoring case");
    }
}
```
- How the language handles comparison of numeric strings if these are not treated lexically
Numeric strings can be compared lexically, so they will respect the numbers' ordering. If you want to compare two string representations of numbers without considering their numerical value, you should convert them to a common type (like `i32` or `f64`). Here's an example:
```rust
fn main() {
    let x = 1;
    let y = "1";

    if x == y.parse::<i32>().unwrap() {
        println!("The numbers are equal");
    } else {
        println!("The numbers are not equal");
    }
}
```

Demonstrate any other kinds of string comparisons that the language provides, particularly as it relates to your type system:
You can use `regex` to perform various string manipulations and pattern matching. Here's an example of how you can split a string into words using a regex pattern:
```rust
extern crate regex;
use regex::Regex;

fn main() {
    let re = Regex::new(r"\s+").unwrap();

    let text = "This is a test sentence";
    for word in re.split(text) {
        println!("{}", word);
    }
}
```

In conclusion, Rust's standard library provides functionalities to compare strings that meet your requirements. However, it doesn't provide built-in support for string comparisons, lexical comparisons, or case insensitive comparisons directly. These features are implemented in external crates such as `rust-unicode-normalization` and `regex`. You can use these libraries to achieve more complex string manipulations and comparisons that meet your specific requirements.
