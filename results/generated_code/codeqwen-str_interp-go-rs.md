The equivalent Rust code for the given Golang code is:

```rust
fn main() {
    let str = "Mary had a %s lamb";
    let txt = "little";
    let out = format!("{}", str, txt);
    println!("{}", out);
}
```

Here is what this code does:

1. `format!("{}", str, txt)` - The `format!` macro in Rust takes a list of arguments and replaces the occurrences of `%s` with the corresponding values from the argument list. In this case, it replaces `%s` with `txt`.

2. `println!("{}", out);` - This prints the result of formatting string `str` using variable `out`. The format is a placeholder for the value assigned to `out` which contains the interpolated value "little" replacing "%s".
