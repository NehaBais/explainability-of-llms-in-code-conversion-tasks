The error occurs because `Option<usize>` does not implement the `std::fmt::Display` trait, which is required for printing strings using `println!`. You can fix this by implementing `std::fmt::Display` for `Option<usize>`. 

To fix the code:
```rust
fn main() {
    let str1  = "abcd";
    let str2  = "ab";

    if str1.starts_with(str2) {
        println!("First string starts with second string");
    } else  {
        println!("First string doesn't start with second string");
    }

    if str1.contains(str2) {
        println!("First string contains second string");
    } else  {
        println!("First string does not contain second string");
    }

    let loc = str1.find(str2);
    match loc {
        Some(_) => println!("Location of match is {}", loc),
        None  => println!("No location of match found"),
    };
}
```
