Here is the equivalent Rust code for your Java program:

```rust
fn main() {
    let mut string = String::from("abc");
    println!("{}", string);
    string.push_str("def");
    println!("{}", string);
}
```
In this Rust code:
1) `String::from` is used to create a String variable equal to any text value (in your case "abc").
2) `push_str` method is used to append another string literal in the most idiomatic way.
3) `println!` macro is used to show the contents of the variable after the append operation.
