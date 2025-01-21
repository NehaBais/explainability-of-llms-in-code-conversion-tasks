Here is how you can convert the given C++ code to Rust:

```rust
fn main() {
    let mut greeting = String::from("Hello");
    greeting.push_str(", world!");
    println!("{}", greeting);
}
```

In this Rust code, we are doing the following:
- Declare a `greeting` variable and initialize it with "Hello". The `String::from()` method is used to create a new `String`.
- The `push_str()` method appends another string literal ", world!" to our `greeting`. This function modifies the original `String`, unlike `append()`.
- Finally, we print out the contents of `greeting` using the `println!` macro. Unlike `std::cout << greeting << std::endl;` in C++, Rust has a simple way to print out data with `println!`.
