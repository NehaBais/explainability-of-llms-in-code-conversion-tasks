In Rust:

```rust
fn main() {
    let a = "ball".to_string();
    let b = "bell".to_string();
    compare(&a, &b);
    ignorecase_compare(&a, &b);
}

// Comparing two strings for exact equality
fn compare(a: &String, b: &String) {
    println!("{} {} {} {} {} {} {}", a, a == b, a != b, a > b, a < b, a >= b, a <= b);
}

// Comparing two strings for case insensitive equality
fn ignorecase_compare(a: &String, b: &String) {
    println!("{} {} {} {} {} {} {}", 
             a,
             a.to_lowercase() == b.to_lowercase(),  // Equal?
             a.to_lowercase() != b.to_lowercase(), // Not equal?
             a.to_lowercase() > b.to_lowercase(),   // Greater than?
             a.to_lowercase() < b.to_lowercase(),    // Lesser than?
             a.to_lowercase() >= b.to_lowercase(),  // Greater or equal to?
             a.to_lowercase() <= b.to_lowercase()   // Lesser or equal to?
             );
}
```
This Rust code defines a main function that creates two string `a` and `b` and compares them using the functions `compare()` and `ignorecase_compare()`. The `compare()` function performs case-sensitive comparison, while the `ignorecase_compare()` function converts both strings to lowercase before comparing (for case insensitive comparison).

Please note that Rust string comparison is based on alphabetical order or lexical order i.e. it compares characters one by one in sequence till it finds a difference and returns result. It does not perform numeric comparison of the actual numbers present in the strings.

In contrast to C, Rust does not provide direct functions for case-insensitive string comparisons where `"Ball"` is equal to `"ball"`. For this reason, we're converting the strings to lowercase before making a case-insensitive comparison.
