In Rust, you can use the `replace` method of a `String` to achieve the same result. The `replace` method creates a new `String` by replacing all occurrences of a specified substring with another substring.

Here's how you can translate your JavaScript code into Rust:

```rust
fn main() {
    let original = String::from("Mary had a X lamb");
    let little = "little";
    let replaced = original.replace("X", little); // creates a new string with the replacement

    println!("{}", replaced);
}
```

In this Rust code:
- `let original` is declared as a `String` and initialized with the value `"Mary had a X lamb"`.
- `let little` is declared as a `&str` (string slice) and initialized with the value `"little"`.
- `let replaced` is declared as a `String` and assigned the result of replacing all occurrences of "X" in `original` with `little`. Since strings are immutable in Rust, this operation does not change the original string but creates a new one.
- Finally, the program prints out the `replaced` string.
