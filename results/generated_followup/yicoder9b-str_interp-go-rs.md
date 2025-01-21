The error message is indicating that `format!` macro expects string literal to format with, but it got a variable (`str`) instead. To fix this issue, either include the formatting placeholders in the `format!` call or make sure you're using string literals as arguments to `format!` where needed.

Here is the corrected code:
```rs
fn main() {
    let str = "Mary had a {} lamb";
    let txt = "little";
    let out = format!(str, txt);
    println!("{}", out);
}
```
