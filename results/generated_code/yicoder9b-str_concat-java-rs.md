In Rust, the equivalent code would look like this:

```rust
fn main() {
    let s: String = "hello".to_string();
    println!("{} literal", &s);
    let s2 = format!("{}{}", &s, " literal");
    println!("{}", s2);
}
```

This code creates a String variable `s` and assigns it the value `hello`. It then prints out a string that combines the contents of `s` with another string literal "literal". The second line creates another string variable `s2` which is equal to the concatenation of original string `s` and another string literal. Lastly, it prints the content of `s2`.
