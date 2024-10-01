Here is the equivalent code in Rust:

```rust
fn main() {
    let s1 = String::from("hello");
    println!("{} world", s1);

    let mut s2 = s1.clone();
    s2.push_str(" world");
    println!("{}", s2);

    let s3: Vec<&str> = vec![&s1, "world", "mom"];
    let s4 = s3.join(", ");
    println!("{}", s4);
}
```

This code does the following:

- `let s1 = String::from("hello");` creates a string variable `s1` with value `"hello"`.
- `println!("{} world", s1);` prints out the concatenated string `s1 + " world"`.
- `let mut s2 = s1.clone();` makes a copy of `s1` and assigns it to `s2`.
- `s2.push_str(" world");` appends `" world"` to the end of `s2`.
- `println!("{}", s2);` prints out the concatenated string `s2`.
- `let s3: Vec<&str> = vec![&s1, "world", "mom"];` creates a vector of strings from `s1`, `"world"` and `"mom"`.
- `let s4 = s3.join(", ");` joins all the elements in `s3` with a comma and space as the separator, and assigns it to `s4`.
- `println!("{}", s4);` prints out the concatenated string `s4`.
