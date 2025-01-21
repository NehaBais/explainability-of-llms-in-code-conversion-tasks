 To convert the given JavaScript code to Rust and demonstrate various string comparisons, we need to consider how Rust handles strings and their comparisons. Rust has a strong type system and provides methods for comparing strings in different ways. Here's how you can achieve similar functionality in Rust:

```rust
fn main() {
    // Comparing two strings for exact equality
    let str1 = "abcd";
    let str2 = "abcd";
    println!("{}", str1 == str2); // true

    // Comparing two strings for inequality (the inverse of exact equality)
    let str3 = "dcba";
    println!("{}", str1 != str3); // true

    // Comparing two strings to see if one is lexically ordered before the other
    println!("{}", str1 < str3); // true

    // Comparing two strings to see if one is lexically ordered after the other
    println!("{}", str1 > str3); // false

    // Case insensitive comparison
    let str4 = "ABCD";
    let str5 = "abcd";
    println!("{}", str4.to_lowercase() == str5.to_lowercase()); // true

    // Comparing numeric strings lexically (treated as text)
    let num_str1 = "123";
    let num_str2 = "123";
    println!("{}", num_str1 == num_str2); // true

    // Comparing different types of strings and numeric strings
    let str6 = "123";
    let str7 = "123";
    println!("{}", str6 == str7); // true (numeric strings are equal)
    println!("{}", 123 == str7.parse::<i32>().unwrap()); // true (numeric comparison with parsed numeric string)
    println!("{}", 123 != str7.parse::<i32>().unwrap()); // false (numeric comparison with parsed numeric string)
}
```

### Explanation:
1. **Exact Equality and Inequality**:
   - Rust uses the `==` operator for exact equality and `!=` for inequality.
   
2. **Lexical Ordering**:
   - The `<` and `>` operators are used to compare strings lexically (i.e., dictionary order).

3. **Case Insensitive Comparison**:
   - Rust's `to_lowercase()` method is used to convert both strings to lowercase, then compared for equality.

4. **Numeric Strings**:
   - Numeric strings are compared as text by default in Rust. To compare them numerically, you can parse the string to a numeric type using methods like `parse()`.

5. **Comparing Different Types**:
   - When comparing different types (e.g., string and integer), Rust will not automatically convert unless explicitly allowed by type coercion rules. In this case, we use `parse::<i32>()` to convert the numeric string to an integer for comparison.

This Rust code demonstrates various aspects of string comparisons, including exact equality, inequality, lexical ordering, and case insensitivity, as well as handling different types of strings appropriately.
