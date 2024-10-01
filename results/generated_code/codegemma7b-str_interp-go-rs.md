```rust
fn main() {
    let str = "Mary had a %s lamb";
    let txt = "little";
    let out = str.replace("%s", txt);
    println!("{}", out);
}
```
