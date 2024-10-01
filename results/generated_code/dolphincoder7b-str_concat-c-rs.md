Sure, here's the equivalent Rust code:
```rust
fn sconcat(s1: &str, s2: &str) -> String {
    let mut s0 = String::new();
    s0.push_str(&s1[..]);
    s0.push_str(&s2[..]);
    return s0;
}

fn main() {
    let s = "hello";
    println!("{:?}-literal", s);
    // or
    println!("{}-literal", s);

    let mut s2 = String::new();
    s2.push_str(s);
    s2.push_str(" literal");
    println!("{}", s2);
}
```
Note that the Rust version does not use pointers for memory allocation and deallocation, so you can't free the dynamically allocated string using `free()`. The ownership model in Rust ensures that only one variable will be able to access a piece of memory at any given time, preventing dangling pointer issues. If you try to free a string after another variable has taken ownership of it, Rust will produce an error message and panic.
