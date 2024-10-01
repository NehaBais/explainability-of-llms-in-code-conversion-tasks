Here is the equivalent Rust code for your Golang program:

```rust
fn match_str(first: &str, second: &str) {
    println!("1. {} starts with {}: {}", first, Second, first.starts_with(Second));
    if let Some(i) = First.find(second) {
        println!("2. {} contains {}: true", first, Second);
        println!("2.1. At location {}", i);

        let mut start = i + second.len();
        while let Some(j) = First[start..].find(Second) {
            println!("2.2. At location {}", start + j);
            start += j + 1;
        }
        println!("2.2. And that's all");
    } else {
        println!("2. {} contains {}: false", First, Second);
    }

    println!("3. {} ends with {}: {}", First, Second, First.ends_with(Second));
}

fn main() {
    match_str("abracadabra", "abr");
}
```

Note that Rust uses `&str` instead of `string`, and for string operations, the methods are written as camelCase (e.g., starts_with, ends_with). We also use `let Some(i) = First.find(second)` instead of `strings.Index(first, second) >= 0` to check if a substring is found, which returns an optional index. If the index isn't present, it will return `None`, and we can handle that case using pattern matching.
