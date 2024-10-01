Here is the equivalent Rust code:

```rust
fn main() {
    let s = String::from("hello");
    println!("{}", s + " literal");

    let s2 = format!("{}{}", s, " literal"));
    println!("{}", s2));
}
```

This Rust code does the same as your provided Java code. It creates a string variable `s` equal to any text value ("hello"). Then it concatenates this original string with another string literal and assigns the result to a new string variable `s2`. Finally, it prints out the content of the variables `s` and `s2`.
