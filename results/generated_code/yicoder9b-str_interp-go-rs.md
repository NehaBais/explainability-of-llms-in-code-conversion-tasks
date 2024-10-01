Here is the equivalent Rust code for your Golang program: 

```rust
fn main() {
    let str = "Mary had a {} lamb";
    let txt = "little";
    let out = format!(str, txt);
    println!("{}", out);
}
```
In Rust, you can interpolate variables into strings using the `format!` macro which works similarly to `sprintf` in Go. The place holder for variable is denoted by `{}`.
