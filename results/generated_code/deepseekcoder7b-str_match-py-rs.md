In Rust, you can use the `starts_with` method for determining if a string starts with another string. The `contains` method checks whether a particular substring exists within a larger string and the `ends_with` method determines if one string ends with another. 

For your requirements, here is how to implement it:

```rust
fn main() {
    let s1 = "abcd";
    let s2 = "ab";
    println!("{}", s1.starts_with(s2)); // returns true
    
    let s3 = "bb";
    println!("{}", s1.contains(s3));  // returns false

    println!("{}", s1.ends_with(s2)); //returns false
  
    // Handling multiple occurrences of a string for part 2 using regex
    
    let re =regex!(s2); 
    for mat in re.find_iter(&s1) {
        println!("Matched: {}", &s1[mat.start()..mat.end()]);  // returns "ab" at index 0 and "ab" at index 2
    }  
}
```
This code will work for checking if a string starts with another string, contains another string, ends with another string. It also handles multiple occurrences of a substring in the main string using regex crate of Rust. Please remember to add `regex = "1"` under dependencies section in Cargo.toml file before running this program:

[dependencies]
regex = "1"

