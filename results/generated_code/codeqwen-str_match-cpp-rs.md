Here is the equivalent code in Rust:

```rust
fn main() {
    let s1 = String::from("abcd");
    let s2 = String::from("abab");
    let s3 = String::from("ab");

    //Beginning
    if s1.starts_with(&s3) {
        println!("The first string starts with the second string");
    }

    //End
    if s1.ends_with(&s3) {
        println!("The first string ends with the second string");
    }

    //Anywhere
    if let Some(loc) = s2.find(&s3) {
        println!("The first string contains the second string at location {}", loc);
        let mut next_loc = loc + 1;
        while let Some(found_at) = s2.find(&s3, next_loc) {
            println!("Occurrence found at position: {}", found_at);
            next_loc = found_at + 1;
        }
    } else {
        println!("The first string does not contain the second string");
    }
}
```

This Rust code does the same thing as your C++ code. It checks if strings `s1`, `s2` and `s3` meet the conditions you listed. If they do, it prints out a message with where the match is found or if there's no match at all.
