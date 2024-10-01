The equivalent code in Rust would be:

```rust
fn main() {
    let mut s = String::from("0123456789");

    let n = 3;
    let m = 4;
    let c = '2';
    let sub = String::from("456");

    println!("{}", &s[n..m+n]);
    println!("{}", &s[n..]);
    println!("{}", &s[..s.len()-1]);
    println!("{}", &s[s.find(c).unwrap()..m+s.find(c).unwrap()]);
    println!("{}", &s[s.find(&sub).unwrap()..m+s.find(&sub).unwrap()]);
}
```

Notes: 

- The `&` symbol before the string slices denotes that we are borrowing from the original string, i.e., not taking ownership of it. This is necessary because we can't move data in Rust; we only have the ability to share references (borrowing) to it.
- The `unwrap()` method on an Option type is used here for demonstration purposes. In a real-world application, you would handle this case more gracefully. In a production environment, you would use a match expression or pattern matching to deal with the result of `find()`, which can return either `Some` (indicating that it found the character or substring) or `None` (indicating that it did not find it).
- Also note that unlike C++, Rust has its own version of string slicing (`&str`) and does not support UTF-8 or UTF-16 out of the box. String slicing in Rust is done using character indices, which means that it works with Unicode code points by default. 
- In this case, we are creating a new `String` from `"456"` because we want to find its index and use it for slicing; if we just passed `&sub` to `find()`, Rust would give us an error because `find()` expects a borrowed reference to a character or string.
