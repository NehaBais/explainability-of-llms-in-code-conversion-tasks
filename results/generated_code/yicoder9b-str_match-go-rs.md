Here is the equivalent Rust code for your Golang program: 

```rust
fn match_strings(first: &str, second: &str) {
    println!("1. {} starts with {}: {:?}\n", first, second, first.starts_with(second));
    if let Some(i) = first.find(second) {
        println!("2. {} contains {} at location: {}\n", first, second, i);
        let count = first[i+1..].matches(second).count();
        for _ in 0..count {
            if let Some(j) = &first[i+1..].find(second) {
                println!("2. {} contains {} at location: {}\n", first, second, i + j as usize + 1);
                i += j as usize + 1;
            } else { break; }
        }
    } else { println!("2. {} does not contain {}\n", first, second) }
    println!("3. {} ends with {}: {:?}\n", first, second, first.ends_with(second));
}

fn main() { 
    match_strings("abracadabra", "abr");
}
```
In the Rust version of your program:
- We use the `starts_with()` method to check if a string starts with another.
- We use the `find()` method to find the position where a substring occurs in a string (first occurrence only).
- The `matches(second)` returns an iterator over all matches of second in first, and `count` counts how many times it appears. 
- We then iterate through these occurrences, printing their locations.
- We use the `ends_with()` method to check if a string ends with another.
- If the substring does not exist in the string, find() returns None and we handle this condition appropriately.
