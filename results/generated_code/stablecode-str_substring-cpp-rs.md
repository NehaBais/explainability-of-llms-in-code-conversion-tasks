In Rust, you can achieve the same functionality with fewer lines of code than in C++. Here's how it could be done:

```rust
fn main() {
    let s = "01234567890";

    println!("{}", &s[3..7]));
    println!("{}", &s[..]}));
    println!("{}", &s[..-1]]));
    println!("{}", &s[s.find('2'), 4 ..].]) ));
}
```
This program will print the desired substrings from the given string `s`.

Please note that Rust is a statically typed language which means there's no implicit conversion between different types of data, unlike dynamically typed languages where you can freely convert between different types of data. Therefore, in your C++ code, when you're using a `char` variable like `'2'`, the Rust equivalent would be to directly use the `char` variable in the substring operations.
