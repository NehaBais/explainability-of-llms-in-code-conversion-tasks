 In Rust, you can use the format! macro to accomplish this same task. Here is a simple program illustrating how:

```rust
fn main() {
    let mut s1 = String::from("Hello");
    s1.push_str(", World!");
    println!("{}", s1);
}
```
In this Rust version, `String::from` is used to convert a string slice (in this case "Hello") into an owned `String`. The `push_str` method is then used to append the string slice ", World!" onto the end of the `String`, and finally `println!` is used to print out the result. The `{}` inside the quotation marks is a placeholder for the variable being printed out, in this case `s1`.
