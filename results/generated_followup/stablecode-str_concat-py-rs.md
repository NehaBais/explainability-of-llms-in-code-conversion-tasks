The error in a single line is: `error: mismatched closing delimiter: ')'`

To fix this, we can add missing opening parentheses or brackets to match the closing delimiters.

Here's the corrected code in a single code block:
```rust
fn main() {
    let mut s1 = String::from("hello"));

    println!("{}", s1 + " world");

    let mut s2 = format!("{}{}", &s1, " world"));
    println!("{}", s2));

    let words: Vec<&str> = vec!["world", "mom"];
    let s3: String = ., 
     ".join(words.iter().map(|s| s.to_string()))));
    println!("{}", s3));
}
```
