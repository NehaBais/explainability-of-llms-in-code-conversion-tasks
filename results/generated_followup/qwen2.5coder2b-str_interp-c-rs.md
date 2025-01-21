The error is because Rust does not allow dots in crate names due to certain internal rules. To fix this, simply remove the dot from your crate name. Here's how you can rewrite the corrected code:

```rs
fn main() {
    let extra = "little";
    println!("Mary had a {} lamb.", extra);
}
```

This will compile without errors and work as intended.
