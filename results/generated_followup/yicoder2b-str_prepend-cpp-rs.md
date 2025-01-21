This error arises because `my_string` is of type &str, which means it's a string reference to some value that must be known at compile time, while `prepend` is a mutable String variable, which can be modified by the program after it has been created. Rust doesn't know what the value of `my_string` will be when this operation is attempted and it doesn't know how to handle it appropriately, hence the error.

The fix is to create an owned String from `my_string` using the `to_owned()` method. This way, Rust knows exactly what the value of `my_string` will be at runtime, allowing the concatenation operation to succeed.

Here's the corrected code:
```rs
fn main() {
    let my_string = "prepended to";
    let mut prepend = String::from("my string");
    println!("{}", &(my_string.to_owned() + &prepend));
}
```
