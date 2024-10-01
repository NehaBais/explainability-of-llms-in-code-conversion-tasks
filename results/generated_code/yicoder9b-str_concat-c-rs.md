In Rust, the equivalent code would look like this:

```rust
fn main() {
    let s1 = String::from("hello");
    let s2 = format!("{} world", s1.clone()); 

    println!("Original string: {}", s1);
    println!("Concatenated string: {}", s2);
}
```

In this Rust code:
- `String::from()` is used to create a string variable named `s1`.
- `format!()` is used to create another string variable named `s2` whose value is the original variable (`s1`) concatenated with another string literal (" world"). 
- The `clone()` method is used to make a copy of the `s1` string, because it can't be borrowed twice.
- `println!()` is used to print out the content of both strings in the console.
