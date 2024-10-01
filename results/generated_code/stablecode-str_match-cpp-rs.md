Below is the equivalent Rust code for the given C++ code:

```rust
fn main() {

    let s1 = "abcd".to_string();
    let s2 = "abab".to_string();
    let s3 = "ab".to_string();
    
    // Beginning
    println!("{}", s1.starts_with(&s2)));
    // End

    // Anywhere
    if let Some(loc) = s1.find(&s2)) {
        println!("Location of match: {}", loc);
    } else {
        println!("No match found");
    }


    let mut s4 = "abcd".to_string();
    let s5 = "ab".to_string();

    // Anywhere with multiple occurrences
    while let Some(loc) = s4.find(&s5)) {
        println!("Location of match: {}", loc));
        s4.remove(loc..loc+s5.len())));
    } else {
        println!("No subsequent match found");
    }
}
```
This Rust code does the same thing as your given C++ code. The only difference is that in Rust, we use `String` instead of `std::string` and we have to import `String` from `std`. In addition, Rust uses snake case for naming conventions unlike C++ which uses camel case. Lastly, the syntax for finding a location within a string (similar to using `find()` function in C++) is different in Rust compared to C++.

In general, you will notice that while working with strings in C++, it is more common to use the `std::string` class and its associated methods. In contrast, when working with strings in Rust, you are likely to utilize the `String` type (from the standard library) and the methods provided by this type.
