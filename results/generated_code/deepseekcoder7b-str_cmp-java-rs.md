Rust version of the Java code can be written as follows,
Here we use `eq` for exact comparison and `ne` to check inequality, `lt` and `le` are used to determine if one string is lexically ordered before or at same position than other. In Rust, `to_lowercase()` method does not exist, but the same can be achieved using iterators:
```rust
fn main() {
    compare("Hello", "Hello");
    compare("5", "5.0");
    compare("java", "Java");
    compare("ĴÃVÁ", "ĴÃVÁ");
    compare("ĴÃVÁ", "ĵãvá");
}

fn compare(a: &str, b: &str) {
     // Checking exact equality and inequality for strings. 
    if a == b {
        println!("'{}' and '{}' are lexically equal.", a, b);
    } else {
       println!("'{}' and '{}' are not lexically equal.", a, b);
    }
    
    // Lexical comparison 
    if a.cmp(b) == std::cmp::Ordering::Less {
        println!("'{}' is lexically before  '{}'", a, b);
    } else if a.cmp(b) == std::cmp::Ordering::Greater{
        println!("'{}' is lexically after '{}'", a, b);
    }
    
    // Lexical comparison without considering case sensitivity 
    let lower_a: String = a.chars().map(|c| c.to_ascii_lowercase()).collect();
    let lower_b: String = b.chars().map(|c| c.to_ascii_lowercase()).collect();
    
    if &lower_a[..] == &lower_b[..]{
        println!("'{}' and '{}' are case-insensitive lexically equal.", a, b);
    } else {
       println!("'{}' and '{}' are not case-insensitive lexically equal.", a, b);
    }
    
    // Numeric string comparison 
    let result = a.parse::<f64>();
    match result {
        Ok(number) => println!("Parsed successfully {}", number),
        Err(_err) => println!("Cannot parse to float: '{}'", a),
    } 
}
```
Please note that the Rust code is less verbose than Java, but it does not have explicit methods for equality and inequality checks as in Java. Also, please make sure to import `std::cmp` to use Ordering enum for comparison purposes. In numeric string comparison, we're trying to parse string to float number, if the parsing fails then it prints appropriate error message, else printing parsed value.

