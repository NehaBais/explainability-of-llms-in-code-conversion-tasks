In Rust, you can use the `starts_with` and `ends_with` methods for comparing strings with prefixes/suffixes. For the second requirement, we can utilize the `contains` method but it won't provide us the position of occurrence. To obtain that, we have to iterate over the string manually. The third part of your code uses a slightly different syntax in Rust than Java.

Below is how you would write this in Rust:
```rust
fn main() {
    // Starting with "ab"
    let str1 = String::from("abcd");
    println!("{}", str1.starts_with("ab"));  //returns true
    
    // Ending with "zn"
    println!("{}", str1.ends_with("zn"));  //returns false
    
    // Containing "bb"
    let str2 = String::from("abab");
    println!("{}", str2.contains("bb"));  //returns true (Note: In Rust, it's `println!("{}", !str2.contains("bb"))` to get false)
    
    // Containing "ab"
    println!("{}", str2.contains("ab"));  //returns true
  
    let mut loc = 0;
    while (loc = str2[..].find(&"ab"[..]).unwrap_or(-1)) != -1 {
        println!("Found at position: {}", loc);
        loc += 1;
    }
}
``` 
Please note that Rust is case sensitive and "!" operator inverts the result of contains function. The `find` method returns an `Option<usize>`, so we need to use the unwrap_or method to provide a default value when nothing was found (i.e., -1). We also must mention that Rust does not directly support get substring from index like in Java's `substring(index)`, you have to do it manually by slicing with start-end indices.

