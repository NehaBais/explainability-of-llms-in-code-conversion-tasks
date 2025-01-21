The error is because Rust does not allow dots (.) to appear in the crate name. To fix this, rename the crate to something like `str_interp`. Here is the corrected code:

```rs
fn main() {
    let extra = "little";
    let new_str = format!("Mary had a {} lamb.", extra);
    println!("{}", new_str);
}
```
