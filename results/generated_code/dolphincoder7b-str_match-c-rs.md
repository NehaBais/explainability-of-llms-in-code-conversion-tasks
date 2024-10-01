Sure, here's the Rust equivalent of your C code. Note that the `startsWith`, `endsWith`, and `doesContain` functions are already defined in the Rust standard library as `starts_with`, `ends_with`, and `contains`, respectively. I will provide an example with some modifications to match the given requirements:
```rust
use std::str::FromStr; // Required for parsing strings from input

fn startsWith(container: &str, target: &str) -> bool {
    container.starts_with(target)
}

fn endsWith(container: &str, target: &str) -> bool {
    container.ends_with(target)
}

fn doesContain(container: &str, target: &str) -> bool {
    container.contains(target)
}

fn main() {
    let input = "Hello";
    println!("StartsWith Test ({},{}) : {}", input, "Hell", startsWith(&input,"Hell")); // Use & to pass references instead of strings
    println!("EndsWith Test ({},{}) : {}", input, "lo", endsWith(&input, "lo"));
    println!("Contains Test ({},{}) : {}", input, "ll", doesContain(&input, "ll"));
}
```
This Rust code uses the `str` module in the standard library to perform string manipulation operations. The `startsWith`, `endsWith`, and `contains` functions are used to fulfill your requirements. The `&` operator is used to pass references instead of strings to prevent unnecessary copying.
