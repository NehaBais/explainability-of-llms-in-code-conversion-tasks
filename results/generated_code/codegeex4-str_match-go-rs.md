```rust
fn match(first: &str, second: &str) {
    println!("1. {} starts with {}: {}", first, second, first.starts_with(second));
    let mut start = 0;
    loop {
        if let Some(i) = first[start..].find(second) {
            println!("2. {} contains {} at location {}", first, second, i + start);
            start += i + 1;
        } else {
            break;
        }
    }
    println!("3. {} ends with {}: {}", first, second, first.ends_with(second));
}

fn main() {
    match("abracadabra", "abr");
}
```
This Rust code provides equivalent functionality as the Golang code you provided.

Please note that Rust's `find()` method works similarly to `strings.Index()` in Golang. If it finds the substring, it returns the starting index; otherwise, it returns `None`.

The use of `&str` for strings makes these operations on string slices easier to perform. The `find()` method searches for a given substring within the slice and returns its start position or `None` if the substring is not found.

As Rust does not support direct iteration over an iterator starting from a specific index, we update `start` variable manually after each match and continue the search from there.
