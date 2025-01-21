 Sure! Here's the equivalent code in Rust:

```rust
fn main() {
    let s = "hello";
    println!("{}", s);
    
    // Concatenate strings using format macro
    let s2 = format!("{}{}", s, " literal");
    println!("{}", s2);
}
```

In this Rust code:
1. We define a string slice `s` with the value `"hello"`.
2. We use the `println!` macro to print the content of `s`.
3. We concatenate the strings using the `format!` macro, which is similar to the C `sprintf` function.
4. The result of the concatenation is stored in `s2`, and then we print it using another `println!` macro.
