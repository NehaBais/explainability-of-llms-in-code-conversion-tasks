Here is the equivalent code in Rust:

```rust
fn main() {
    let original = String::from("Mary had a X lamb.");
    let to_be_replaced = "X";
    let replacement = "little";

    let new_string = original.replace(&to_be_replaced, replacement);
    println!("String after replacement: {}", new_string);
}
```

In this Rust code, we define a `String` with the initial sentence and replace "X" in it with "little" using the `replace()` method. The updated string is then printed out to the console. Note that unlike C++ where you have to use find() function explicitly for locating substring position, in rust this happens implicitly when you pass a string slice (str) as the first parameter of replace method.
