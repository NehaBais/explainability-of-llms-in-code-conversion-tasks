In Rust, you can use the `starts_with` and `ends_with` methods to determine if a string starts with or ends with another string respectively. For checking if a string contains another string at any location, you could use a regular expression as shown below:
```rust
extern crate regex;
use regex::Regex;

fn main() {
    let stringA = "tacoloco";
    let stringB = "co";
    
    // 1. String starts with another string
    assert!(stringA.starts_with(stringB));

    // 2. String contains another string at any location
    let re = Regex::new(stringB).unwrap();
    let matches = re.find_iter(&stringA);
    
    println!("2: Is '{}' contained in '{}'? ", stringB, stringA);
    
    if matches.any(|m| true) {
        println!("Yes, at index {}.", matches.map(|m| m.start()).collect::<Vec<usize>>().join(", "));
    } else {
        println!("No.");
   <｜begin▁of▁sentence｜>}
    
    // 3. String ends with another string
    assert!(stringA.ends_with(stringB));
}
```
This Rust code does the same things as your JavaScript code, but is more idiomatic to the language and requires no external dependencies. It uses regex crate for the second part of requirement 2 (contain). Also note that this assumes you're just wanting a vector of indices where stringB occurs in stringA. If you want actual matches themselves rather than their start index, replace `m.start()` with `m.as_str()`.

