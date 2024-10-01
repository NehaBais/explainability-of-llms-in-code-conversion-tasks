Here is the equivalent Rust code:

```rust
fn concat_strings(s1: &str, s2: &str) -> String {
    let mut combined = String::new();
    combined.push_str(s1);
    combined.push_str(" literal");
    combined.push_str(s2);
    combined
}

fn main() {
    let s: &str = "hello";

    println!("{} literal", s);

    // or 

    println!("{} literal", s);

    let s2 = concat_strings(s, " literal");

    println!("The combined string is: {}", s2);

    // Don't forget to free the memory allocated for s2
}
```
In Rust, since we have ownership over strings in Rust and it's done with the String type itself, we don't need a `*` when declaring the s2 variable.
Remember that you are responsible for freeing up the memory used by s2 when you're finished using it to prevent memory leaks.
