Sure, here is the equivalent Rust code for your Python example. Note that Rust uses `String` type instead of Python's built-in strings and also requires explicit conversion.

```rust
fn main() {
    let s1 = String::from("hello");
    println!("{}", s1 + " world");

    let s2 = s1.clone() + " world";
    println!("{}", s2);

    let s3 = vec![s1, String::from("world"), String::from("mom")].join(", ");
    println!("{}", s3);

    let s4 = vec![s1.clone(), String::from("world"), String::from("mom")].join(", ");
    println!("{}", s4);
}
```

In this Rust code:
- `String::from` is used to create a new string from the provided text.
- `.clone()` method is used for creating a copy of the string, and then it concatenates with " world".
- The `.join`, when called on a vector of strings or any other collection that can be iterated over, concatenates all elements into one single string.

The Rust code will output:

hello world
hello world
hello, world, mom
hello, world, mom

