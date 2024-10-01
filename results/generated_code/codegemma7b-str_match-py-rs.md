```rust
fn starts_with(s1: &str, s2: &str) -> bool {
    s1.starts_with(s2)
}

fn contains(s1: &str, s2: &str) -> bool {
    s1.contains(s2)
}

fn ends_with(s1: &str, s2: &str) -> bool {
    s1.ends_with(s2)
}

fn find_first_location(s1: &str, s2: &str) -> Option<usize> {
    s1.find(s2)
}

fn find_next_location(s1: &str, s2: &str, start_loc: usize) -> Option<usize> {
    s1.find(s2, start_loc + 1)
}

fn handle_multiple_occurrences(s1: &str, s2: &str) {
    let mut start_loc = find_first_location(s1, s2);
    while let Some(loc) = start_loc {
        println!("Location of match: {}", loc);
        start_loc = find_next_location(s1, s2, loc);
    }
}
```

**Usage Example:**

let s1 = "abcd";
let s2 = "ab";

println!("Starts with: {}", starts_with(s1, s2)); // Output: True
println!("Ends with: {}", ends_with(s1, "zn")); // Output: False
println!("Contains: {}", contains(s1, s2)); // Output: True

let s3 = "abab";
println!("First location of match: {}", find_first_location(s3, "bb")); // Output: None
println!("First location of match: {}", find_first_location(s3, "ab")); // Output: Some(0)
println!("Next location of match: {}", find_next_location(s3, "ab", 0)); // Output: Some(2)

handle_multiple_occurrences(s3, "ab");
