The equivalent code in Rust would be:

```rust
fn main() {
    let my_string = "prepended to";
    let mut prepend = String::from("my string");
    println!("{}", &(my_string + &prepend));
}
```
This code does exactly the same as the previous C++ code. It declares a vector of strings (the original text and the string to be prepended), creates a mutable string called prepend with initial value "my string" and then concatenates both strings using the `+` operator, which is equivalent to the C++ version's std::accumulate method. Finally, it prints out the result.
