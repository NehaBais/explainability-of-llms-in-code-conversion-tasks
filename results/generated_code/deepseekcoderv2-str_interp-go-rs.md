 Certainly! Below is the equivalent Rust code for the provided Golang code snippet using string interpolation:

```rust
fn main() {
    let str = "Mary had a {} lamb";
    let txt = "little";
    let out = format!(&str, txt);
    println!("{}", out);
}
```

In this Rust code:
- `let str = "Mary had a {} lamb";` defines the template string with a placeholder for interpolation.
- `let txt = "little";` defines the value to be interpolated into the string.
- `let out = format!(&str, txt);` uses the `format!` macro to perform the interpolation and store the result in `out`.
- `println!("{}", out);` prints the interpolated string.
