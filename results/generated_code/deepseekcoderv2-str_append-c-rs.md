 Certainly! Below is the Rust equivalent of the provided C code. This example demonstrates how to create a string variable and append it with another string literal in a safe and idiomatic way using Rust's standard library.

```rust
fn main() {
    let mut str = String::from("Good Morning");
    let cstr = " to all";
    let cstr2 = " !!!";

    // Append the strings using Rust's built-in methods
    str.push_str(cstr);
    str.push_str(cstr2);

    println!("{}", str);
}
```

In this Rust code:
1. We create a mutable `String` variable `str` initialized with the value "Good Morning".
2. We define two string literals, `cstr` and `cstr2`.
3. We use the `push_str` method to append these literals to the existing string.
4. Finally, we print the contents of the modified string.

This approach ensures that there is no buffer overflow risk, as Rust's standard library provides safe methods for manipulating strings.
