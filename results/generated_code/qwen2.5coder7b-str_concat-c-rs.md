Here is how you can convert the given C code to Rust:
```rust
fn main() {
    let s = "hello";
    
    println!("{} literal\n", s);
    // or
    println!("{}\n", format!("{} literal", s));

    let s2 = concat_strings(s, " literal");
    println!("{}", s2);
}

fn concat_strings(s1: &str, s2: &str) -> String {
    let mut result = String::new();
    result.push_str(s1);
    result.push_str(s2);
    result
}
```
In Rust, strings are UTF-8 encoded by default. The `&str` type represents a string slice (a fixed-size piece of a string). We use the `format!` macro to concatenate the two string literals and the value of `s`. We also define a function `concat_strings` that takes two string slices and returns a `String`, which is a growable heap-allocated string type in Rust.
