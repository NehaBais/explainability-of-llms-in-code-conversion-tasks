 In Rust, you can achieve the same result with a simpler and more idiomatic way using string concatenation. Here's the equivalent Rust code:

```rust
fn main() {
    let mut str = String::from("Good Morning");
    let cstr = " to all";
    let cstr2 = " !!!";
    
    // Append the string literal in the most idiomatic way.
    str.push_str(cstr);
    str.push_str(cstr2);
    
    println!("{}", str);
}
```

In this Rust code, we use `String::from` to create a string from a literal, and then the `push_str()` method is used to append other string literals to it. The `.push_str()` method does not need to check whether there's enough space in the string as Rust strings can grow dynamically when necessary.
