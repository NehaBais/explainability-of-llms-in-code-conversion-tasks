 In Rust, you can use the `format!` macro to combine strings. Here is your C++ code converted into Rust:

```rust
use std::fmt::Write;

fn main() {
    let mut s = String::new();
    writeln!(s, "{} literal", "hello").unwrap();
    println!("{}", s);
    
    let s2 = format!("{}{}", "hello", " literal");
    println!("{}", s2);
}
```

In this Rust version of the code, we are using `writeln!` macro to write into a string. The `format!` macro will concatenate the strings "hello" and " literal". We then print both `s` and `s2`. 

The `.unwrap()` method is used because the `write!` family of macros returns an error type that we need to handle explicitly. This method would not be needed in normal Rust code, but as this is a learning exercise it has been included for clarity.

Rust's String handling is a bit different from C++. You usually won't see any `+` operator used with strings and rather use the `format!` macro to concatenate them.
