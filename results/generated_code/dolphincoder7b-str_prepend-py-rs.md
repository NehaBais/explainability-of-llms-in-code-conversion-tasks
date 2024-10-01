Here is the equivalent Rust code for your Python script:

```rust
fn main() {
    let s = "12345678";
    let new_string = format!("0{}", s);  // by formatting with a placeholder {}
    println!("{}", new_string);
}
```

In this Rust code, we declare a variable `s` of type `String`, initialize it to the string value `"12345678"`. We then create a new string `new_string` by concatenating the string literal `"0"` with `s` using the `format!` macro. Finally, we print the resulting string `new_string` on the screen.

You can run this code in your Rust environment by saving it to a file and executing `rustc main.rs` followed by `./main`. It will output the result: `"012345678"`.
