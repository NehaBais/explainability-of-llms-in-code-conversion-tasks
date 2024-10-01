 In Rust, you can achieve the same comparison results with functions like PartialEq::eq and PartialOrd::lt. Here's a simple conversion of your JavaScript code to Rust:

```rust
fn main() {
    println!(
        "abcd == abcd: {}, {} === abcd: {}, {} != abcd: {}, {} !== '123': {}, abcd < dcba: {}, abcd > dcba: {}, ABCD.to_lowercase() == abcd.to_lowercase(): {}"
        , "abcd" == "abcd", "abcd" === "abcd", 123 == "123", 123 != "123", 123 !== "123", "abcd" < "dcba", "abcd" > "dcba", "ABCD".to_lowercase() == "abcd".to_lowercase()
    );
}
```

In Rust, strings are compared lexically by default if they have the same type. In this case, `==` and `PartialEq::eq` functionally do the same thing as in JavaScript for string comparison. For inequality (`!=`), you can use `!=`, or `!PartialEq::eq`. 

For lexicographically ordering strings, Rust uses `<`, `lt`, and `>`,`gt` functions. Here's how to do it:

fn main() {
    println!("{}", "abcd" < "dcba"); // prints: true
}

To compare the two strings regardless of case, you can convert them both to lowercase or uppercase before comparing. Here's how to do it in Rust:

fn main() {
    println!("{}", "ABCD".to_lowercase() == "abcd".to_lowercase()); // prints: true 
}

As for handling numeric strings, as long as they can be compared lexicographically (i.e., converted to a format that Rust's PartialOrd trait can compare), the compiler will do it by default. This is why "123" is less than "dcba".
