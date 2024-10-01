Rust is a systems programming language focused on safety, speed, and concurrency. Rust does not support null-terminating strings in the traditional sense that C does. However, it provides the `String` type for string manipulation. Here's how you could convert your given code to Rust:

```rust
fn main() {
    let mut str = String::from("Good Morning");
    let cstr = " to all";
    let cstr2 = " !!!";

    // Append strings in the most idiomatic way
    str.push_str(cstr);
    str.push_str(cstr2);

    // Print contents of variable after append operation
    println!("{}", str);
}
```

In this code:

- Instead of an array, we use a `String` object which is more flexible and recommended for handling text in Rust.
- We use the `.push_str(&str)` method to append strings. This method takes an immutable reference as input so that it can work on borrowed string slices (without requiring ownership transfer).
- `println!()` is equivalent to `printf()` in C. It prints its arguments to the standard output. The `{}` inside the `println!` macro corresponds to the string `str`.
