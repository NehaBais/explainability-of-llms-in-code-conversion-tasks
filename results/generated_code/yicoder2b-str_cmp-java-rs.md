Sure, here's the equivalent code in Rust:

```rust
fn main() {
    compare("Hello", "Hello");
    compare("5".to_string(), "5.0".to_string());
    compare("java".to_string(), "Java".to_string());
    compare("ĴÃVÁ".to_string(), "ĴÃVÁ".to_string());
    compare("ĴÃVÁ".to_string(), "ĵãvá".to_string());
}

fn compare(a: String, b: String) {
    if a == b {
        println!("'{}' and '{}' are lexically equal.", a, b);
    } else {
        println!("'{}' and '{}' are not lexically equal.", a, b);
    }
    println!();

    if a.to_lowercase() == b.to_lowercase() {
        println!("'{}' and '{}' are case-insensitive lexically equal.", a, b);
    } else if a.to_uppercase() != b.to_uppercase() {
        println!("'{}' and '{}' are not case-insensitive lexically equal.", a, b);
    }
    println!();

    let mut a = a.chars().collect::<Vec<char>>();
    let mut b = b.chars().collect::<Vec<char>>();
    a.sort();
    b.sort();
    if &a[0] as i32 < b.first_mut().unwrap().as_i32() {
        println!("'{}' is lexically before '{}'.", a.into_iter().join(""), b.into_iter().join(""));
    } else if &a[0] as i32 > b.first_mut().unwrap().as_i32() {
        println!("'{}' is lexically after '{}'.", a.into_iter().join(""), b.into_iter().join(""));
    } else if &a[0] as i32 <= b.first_mut().unwrap().as_i32() {
        println!("'{}' is not lexically before '{}'.", a.into_iter().join(""), b.into_iter().join(""));
    } else if &a[0] as i32 >= b.first_mut().unwrap().as_i32() {
        println!("'{}' is not lexically after '{}'.", a.into_iter().join(""), b.into_iter().join(""));
    }

    let rel = a.cmp(&b);
    match rel {
        std::cmp::Ordering::Equal => println!("The lexical relationship is: equal"),
        std::cmp::Ordering::Greater => println!("'{}' is lexically greater than '{}'", a.into_iter().join(""), b.into_iter().join("")),
        std::cmp::Ordering::Less => println!("'{}' is lexically less than '{}'", a.into_iter().join(""), b.into_iter().join("")),
    }
    println!();
    let rel = a.to_lowercase().cmp(&b.to_lowercase());
    match rel {
        std::cmp::Ordering::Equal => println!("The case-insensitive lexical relationship is: equal"),
        std::cmp::Ordering::Greater => println!("'{}' is case-insensitive lexically greater than '{}'", a.into_iter().join(""), b.into_iter().join("")),
        std::cmp::Ordering::Less => println!("'{}' is case-insensitive lexically less than '{}'", a.into_iter().join(""), b.into_iter().join("")),
    }
}
```
Please note that the `rust` language does not have an exact equivalent to Java's `compareTo()` method for comparing strings. However, it has a similar functionality provided by Rust's comparison operator (`cmp` module) which works with characters and Unicode points directly, but this might not cover all use cases. Rust doesn't differentiate between numeric string and non-numeric string like Java does so we can't treat them lexically in the same way as in Java.
