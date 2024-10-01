```rust
fn main() {
    let mut str = String::from("Mary had a {} lamb");
    let txt = String::from("big");
    str = str.replace("{ }", &txt);
    println!("{}", str);
}
```
