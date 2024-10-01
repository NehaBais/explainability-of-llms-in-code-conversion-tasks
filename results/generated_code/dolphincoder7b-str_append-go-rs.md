Rust does not have a built-in `strings.Builder` type to perform the same operation as in Golang. However, you can use `String::push_str()` method to append another string. Here is how it looks like in Rust:

```rust
fn main() {
    let mut s = String::new();
    s.push_str("foo");
    s.push_str("bar");
    println!("{}", s);
}
```

In this example, `String` is the type we're using for storing our string data. We declare a mutable variable called `s`, which is initialized with an empty string. Then, we use `push_str()` method to append strings "foo" and "bar". Finally, we print out the value of `s`.

To see the output, you can run this code in a Rust environment or by using a tool like [Rust playground](https://play.rust-lang.org/) to test it online. You will get an output containing the concatenated string "foobar".
