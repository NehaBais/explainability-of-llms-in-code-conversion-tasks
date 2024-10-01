Here is the equivalent code in Rust:

```rust
fn main() {
    let mut s = String::from("hello");
    println!("{} literal", s);
    s.push_str(" literal");
    println!("{}", s);
}
```

In this code, we first create a string `s` with the value "hello". Then we print out the string appended with " literal" using `println!` macro. Next, we append " literal" to our string `s` using the `push_str()` method and then print out the new content of `s`.
