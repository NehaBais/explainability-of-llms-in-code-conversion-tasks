The equivalent Rust code would be as follows:

```rust
fn main() {
    let mut s = String::from("foo");
    s.push_str("bar");
    println!("{}", s);
}
```
In this case, we're not using a `String` builder because Rust strings are designed to be immutable and grow in place. However, the above code can also work if you want to use a mutable string as you would do with Go language:

fn main() {
    let mut s = String::from("foo");
    s.push_str("bar");
    println!("{}", &s);
}

