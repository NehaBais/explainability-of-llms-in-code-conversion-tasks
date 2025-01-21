The error is because `let` keyword cannot be used for defining global variables in Rust. Instead, we can use `const` or `static`.

```rs
fn main() {
    const ADJECTIVE: &str = "little";
    let lyric: String = format!("Mary had a {} lamb", ADJECTIVE);
    println!("{}", lyric);
}
```

In the above code snippet:
- We define `ADJECTIVE` as a constant with the value `"little"`.
- The `let` keyword is used to define `lyric`, which is a string created using the `format!` macro.
- Finally, we print the interpolated string.
