The equivalent Rust code for the given Golang code would be as follows:

```rust
fn main() {
    let str = "Mary had a %s lamb";
    let txt = "little";
    let out = format!(str, txt);
    println!("{}", &out);
}
```
