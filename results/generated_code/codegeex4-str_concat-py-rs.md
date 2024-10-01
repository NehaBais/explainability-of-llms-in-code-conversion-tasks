```rust
fn main() {
    let mut s1: String = String::from("hello");
    println!("{}", s1 + " world");

    let s2: String = format!("{} world", s1);
    println!("{}", s2);

    s1 = String::from("hello");
    println!("{}", s1 + ", " + &"world" + ", " + &"mom");

    let s2: String = format!("{}, {}, {}", s1, "world", "mom");
    println!("{}", s2)
}
```

Please note that in Rust, `String` is the mutable version of a string and it allows modification. The `&str` type is an immutable version of the string type. We can use `format!` macro to concatenate strings safely.

You may want to consider using `String::push_str` or `+=` operator to append strings to `s1` as follows:

s1.push_str(" world");

or 

s1 += " world";

But since the original Python code does not modify `s1` after concatenation, I have directly used string literals for simplicity in the Rust conversion.
