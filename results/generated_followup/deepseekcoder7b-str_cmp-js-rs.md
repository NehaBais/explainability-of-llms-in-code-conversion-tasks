The error occurs because Rust is statically typed language, while JavaScript (and many other languages) are dynamically typed. In Rust, you cannot compare an integer with a string directly without any conversion. 

The fix for this would be to convert the numeric value into string format before comparison or allow the compiler to automatically convert strings that represent numbers to their equivalent numerical type. This is typically done using `parse!` macro in case of strings representing integers, and `f64::from_str` function in case of floating-point numbers.

Here's the corrected Rust code:

```rs
fn main() {
    // Comparing two strings for exact equality and inequality.
    assert_eq!("abcd", "abcd");  // true
    assert_ne!("abcd", "Abcd");  // true
    
    let num1: i32 = 123;
    assert_eq!(num1, 123);  // true
    let str1 = "123";
    let num2: i32 = str1.parse().unwrap();
    assert_eq!(num1, num2);  // true
    
    // Comparing two strings for lexical order before and after.
    assert_eq!("abcd" < "dcba", true);  // true
    assert_eq!("abcd" > "dcba", false);  // false
    
    // Case sensitive comparison
    assert_ne!("ABCD".to_lowercase(), "abcd");  // false
    
    // Comparing two numeric strings. Rust automatically converts string to numbers if possible.
    let num3: i32 = 123;
    assert_eq!(num3, 123);  // true
    assert_ne!(num3, "456".parse().unwrap());  // false
}
```

In this corrected Rust code, we parse string to number explicitly using `str.parse()` function and unwrapping the result. We also convert numbers to strings before comparing as in JavaScript it can automatically do that.

