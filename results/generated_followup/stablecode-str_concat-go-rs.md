The error is due to an unclosed delimiter, specifically the closing brace `}` at line 17 of your code.

To fix this error, you can add a closing brace `}` at the end of each function or block enclosed in braces (`{}`)). This ensures that all opening and closing delimiters are properly matched.

Here is the corrected code:
```rust
fn main() {
    let s = "hello";

    println!("{}", s);

    println!("{}+literal", s);

    let s2 = format!("{}{}", s, " literal"));

    println!("{}", s2);
}
```
By adding the closing brace `}` at the end of each function or block enclosed in braces (`{}`)), we ensure that all opening and closing delimiters are properly matched.
