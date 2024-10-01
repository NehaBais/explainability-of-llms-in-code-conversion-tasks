In Rust, string manipulation is done more directly compared to Golang. 

Here's how you might convert the Go code provided into a Rust program:

```rust
fn main() {
    let mut s = String::from("foo");
    s.push_str("bar");
    println!("{}", s);
}
```
In this Rust version of the Go code, we first create a `String` variable named `s` and initialize it with "foo" using the `from` function from the `String` struct. Then, to append another string (in this case "bar"), we use the `push_str` method on our string object `s`. Finally, after appending, we print out the contents of the variable `s` with the help of a `println!` macro that uses placeholders for formatting. The `{}` will be replaced by the value in the variable `s`.
