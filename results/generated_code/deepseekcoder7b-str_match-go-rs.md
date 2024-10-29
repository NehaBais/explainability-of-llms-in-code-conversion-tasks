The Rust code is as follows:

```rust
fn main() {
    let first = "abracadabra".to_string();
    let second = "abr";
    
    // Determining if the string starts with second string
    println!("1. {} starts with {}: {}", 
        &first, second, first.starts_with(second));
        
    // Determining if the string contains the second string at any location
    let index = first.find(&second);
    match index {
        Some(i) => {
            println!("2. {} contains {}: true", 
                &first, second);
            
            // Printing the location of the first occurrence
            println!("2.1. at location: {}", i);
            
            let mut start = i+1;
            while start < first.len() {
                match first[start..].find(&second) {
                    Some(j) => {
                        // Printing the location of each subsequent occurrence
                        println!("2.2. at location: {}", start + j);
                        start += j+1;
                    },
                    None => break,
                }
            }
            
            println!("2.2. and that's all");
        },
        None => {
            println!("2. {} contains {}: false", 
                &first, second);
        }
    }
    
    // Determining if the string ends with the second string
    println!("3. {} ends with {}: {}", 
        &first, second, first.ends_with(second));
}
```
This code does exactly the same thing as your Golang script. It checks whether the `first` string starts with `second` (1), contains `second` at any location (2 and 2.* sub-parts), and ends with `second` (3).

