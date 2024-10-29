In Rust, you can achieve the same thing with this code:

```rust
fn main() {
    let mut s1 = String::from("hello");
    println!("{} world", s1);
    
    s1.push_str(" world");
    println!("{}", s1);

    let s2 = format!("{}, {} and {}", s1, "world", "mom");
    println!("{}", s2);
}
```

This Rust code does the same things as your Python code. It creates a mutable string variable `s1` with value of "hello" then adds " world" to it and prints it. Then, it joins `s1`, "world", and "mom" using format! macro into one string and print that string.

