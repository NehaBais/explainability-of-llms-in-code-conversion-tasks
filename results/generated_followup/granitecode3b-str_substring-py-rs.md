The error is caused by the fact that Rust does not know the size of the string at compile time, which makes it unable to determine the length of the string or perform operations on it. To fix this issue, you can either use a `for` loop to iterate over the string or convert the string to a byte slice and work with that instead.

Here is the corrected code:

```rust
fn main() {
    let string = "Hello, world!";

    for (i, c) in string.chars().enumerate() {
        println!("{}: {}", i, c);
    }
}
```

