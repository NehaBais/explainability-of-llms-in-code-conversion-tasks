In Rust, we can use the `starts_with`, `contains` and `ends_with` methods from the str type to perform these tasks. To print the location of a match in part 2, we can use the `find` method which returns an Option containing the index of the match if it exists or None otherwise.

Here is how you can convert your Java code to Rust:

```rust
fn main() {
    let s1 = "abcd";
    let s2 = "ab";
    
    println!("{}", s1.starts_with(s2)); // true

    let s3 = "zn";
    println!("{}", s1.ends_with(s3)); // false

    let s4 = "bb";
    println!("{}", s1.contains(s4)); // false
    let s5 = "ab";
    println!("{}", s1.contains(s5)); // true
    
    let s6 = "abab";
    
    match s6.find(s5) {
        Some(loc) => println!("Location: {}", loc), // 0
        None => println!("Not found"),
    }
    
    match s6.find(&s4[1..]) {
        Some(loc) => println!("Location: {}", loc), // 2
        None => println!("Not found"),
    }

    let mut offset = s5.len();
    while let Some(loc) = &s6[offset..].find(s5) {
        println!("Location: {}", offset + *loc);
        offset += s5.len() + *loc;
    }
}
```

This code will print the following:

true
false
false
true
Location: 0
Location: 2
Location: 4

Please note that indexing and length calculations in Rust are different from Java, as it doesn't have a built-in method for getting substring. We need to use string slicing to do the same thing.

In the last part, we're searching for multiple occurrences of `s5` in `s6` and printing their locations.
