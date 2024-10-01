Rust's type system does not allow for comparison of a number and a string. However, we can convert numbers to strings and compare them as follows:

```rust
fn main() {
    println!(
        "{}", 
        "abcd" == "abcd" 
        && "abcd" === "abcd" // true
        && "123".parse::<i32>().unwrap_or_default() == "123".parse::<i32>().unwrap_or_default()
        && "ABCD" != "abcd" // false
        && "ABCD" != "abcd" // true
        && "123".parse::<i32>().unwrap_or_default() != "123".parse::<i32>().unwrap_or_default()  // false
    );
    
    println!(
        "{}", 
        "abcd" < "dcba" // true
        && "dcba" > "abcd" // true
    );
    
    // To compare two strings case-insensitive:
    println!(
        "{}",
        "ABCD".to_lowercase() == "abcd".to_lowercase()  // true (case insensitive)
    );

}
```

Note that we need to use `parse` function to convert string into integer, otherwise rust will throw error. If the conversion is not possible, it will return a default value of type `i32`, which is `0`. 

The `unwrap_or_default()` function is used because Result types are returned by parse functions. This will either give us the parsed number or `default` if parsing failed.

Also note that in Rust you can't compare two variables using "==" operator unless they have the same type. If you need to compare strings with different cases, you would usually convert them all to lower case (or upper) before comparison.

This is just a basic example and doesn't cover all edge cases. You should handle possible errors when parsing string to integer in a real-world application.
