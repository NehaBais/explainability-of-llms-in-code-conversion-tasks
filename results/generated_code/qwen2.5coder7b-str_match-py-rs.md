Here is how you can implement the given Python code in Rust.

```rust
fn main() {
    let a = String::from("abcd");
    let b = String::from("ab");

    println!("{}", a.starts_with(&b)); // prints: true
    println!("{}", !a.ends_with(&String::from("zn"))); // prints: true

    if a.contains(&b) {
        println!("Substring found!");
    } else {
        println!("Substring not found!");
    }

    let loc = a.find(&b);
    match loc {
        Some(index) => println!("Location: {}", index), // prints: Location: 0
        None => println!("Not Found!"),
    };

    if let Some(loc) = a.find(&b) {
        println!("Next location: {}", loc + b.len()); // prints: Next location: 2
    }
}
```

In Rust, string matching functions (`starts_with`, `ends_with` and `contains`) are provided by the built-in `String` type, similar to Python. The `find` function returns an `Option<u32>` which is a common way in Rust to handle results that may not always exist (like finding substrings). If the substring is found, `find` will return `Some(index)`, otherwise it will return `None`. We use pattern matching (`match`) to handle these two cases. In this example, we are using `let-else` pattern to unwrap `Option` or else print "Not Found!".
