Here is the equivalent Rust code for your C program:

```rust
fn main() {
    let mut str1 = String::from("Good Morning");
    str1.push_str(" to all");
    str1.push_str(" !!!");
    println!("{}", str1);
}
```
This code creates a `String` variable called `str1` and assigns it the text value "Good Morning". Then using the method push_str(), we append two more string literals to this variable - " to all" and " !!!". Finally, we print out the contents of str1 after these append operations with println! macro.

One thing you need to know about Rust is that strings are immutable by default in most cases, so if you want to make changes (append more characters) you have to declare your variable as a mutable one using `let mut`.
