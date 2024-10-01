Here is the equivalent Rust code:
```
fn main() {
    let str = "Mary had a %s lamb";
    let txt = "little";
    let out = format!(str, txt);
    println!("{}", out);
}
```
The `format!` macro takes two arguments: 1) the string to be formatted and 2) any values to be interpolated. In this case, it's a single value provided as a string literal. The `%s` placeholder is replaced by the `txt` value in the final output.
