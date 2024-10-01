In Rust, we can achieve this using the `replace` function from the `std::mem` module. We also need to use string formatting features of Rust.

```rust
fn main() {
    let mut original = "Mary had a X lamb".to_string();
    let little: &str = "little";
    
    // Replace 'X' with 'little'
    original = original.replace("X", little);
    
    println!("{}", original); // prints "Mary had a little lamb"
}
```
This code creates a mutable string `original` and assigns it the value of `"Mary had a X lamb"`. It then defines a string slice `little` and assigns it the value `"little"`.
The line `original = original.replace("X", little);` replaces all occurrences of "X" in `original` with the value of `little` and reassigns the result back to `original`.

Finally, the function `println!("{}", original)` prints the modified string.

Remember that Rust's replace() returns a new String rather than modifying the existing one. Therefore, we need to re-assign the result of replace() to original.

Also, please note that because we are dealing with user-provided input data, you should be aware of potential vulnerabilities from using `replace()` function, such as replacing parts of your string unintentionally.
