Here is how you can convert the given C++ code to Rust:

```rust
fn main() {
    let s1 = "abcd";
    let s2 = "abab";
    let s3 = "ab";

    // Beginning
    if s1.starts_with(s3) {
        println!("s1 starts with s3");
    } else {
        println!("s1 does not start with s3");
    }

    // End
    if s1.ends_with(s3) {
        println!("s1 ends with s3");
    } else {
        println!("s1 does not end with s3");
    }

    // Anywhere
    let loc = s2.find(s3);
    
    match loc {
        Some(l) => println!("s3 found in s2 at location: {}", l),
        None => println!("s3 not found in s2"),
    }
}
```

In the given C++ code, `find()` function returns `-1` if it doesn't find a substring. In Rust, `find()` returns an Option enum that is either Some(index) or None. Therefore, we have to handle this situation using `match`. The above solution will print the index of the first occurrence of s3 in s2. If you want to find all occurrences, you can use a loop and incrementally increase the start position after each found occurrence.
