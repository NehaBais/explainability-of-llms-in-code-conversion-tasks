```rust
fn sconcat(s1: &str, s2: &str) -> String {
    let mut s0 = String::from(s1);
    s0.push_str(s2);
    s0
}

fn main() {
    let s = "hello";
    let s2 = sconcat(s, " literal");

    println!("{}", s); // or
    println!("{}{}", s, " literal");

    println!("{}", s2);
    drop(s2);
}
```
