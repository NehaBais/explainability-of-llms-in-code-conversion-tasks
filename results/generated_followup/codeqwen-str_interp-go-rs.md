Error: Argument never used - The argument `str` is defined but never used in the format string.

Fix: Remove the `str` argument from the format string.

Corrected Code:

```rs
fn main() {
    let txt = "little";
    let out = format!("Mary had a {} lamb", txt);
    println!("{}", out);
}
```
