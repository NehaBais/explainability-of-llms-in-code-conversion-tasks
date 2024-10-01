Sure! Here's the equivalent Rust code:
```rust
fn main() {
    let str = format!("Mary had a {} lamb", "big");
    let txt = "little";
    let out = format!("{}", str.replace("%s", &txt));
    println!("{}", out);
}
```
In this code, we first define the original string `str` using string interpolation with the variable `txt`. Then, we use the `format!` macro to replace the `%s` placeholder in the string with the value of `txt`. Finally, we print the resulting string. 
Note that in Rust, you don't need to import the `fmt` module like in Golang, and there is no need to call the `Sprintf()` function like in Golang. Instead, you can use the `format!` macro directly.

