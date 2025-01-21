Here is the equivalent code in Rust:

```rust
fn main() {
    let s = String::from("hello");
    println!("{}", s + " literal");
    
    let s2 = format!("{} literal", s);
    println!("{}", s2);
}
```

In this Rust program, `String::from("hello")` is used to create a new string. The "+" operator cannot be used directly with strings in Rust because it requires two references to the same type. Instead, we use the `format!` macro which creates a new string and can take ownership of other variables.

The first line prints "hello literal" and then assigns the result to `s2`. The second line simply prints the content of `s2`.

Note that in Rust, all strings are UTF-8 by default, unlike Java where strings may contain any valid unicode character. Therefore, this program should work correctly with a wide range of text inputs, as long as they are valid UTF-8.
