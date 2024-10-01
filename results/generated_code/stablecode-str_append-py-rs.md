Here is the equivalent Rust code for your Python script. 

```rust
fn main() {
    let mut str = "123 456 78".to_string();
    str.push_str("9!");

    println!("{}", str);
}
```
In this Rust version of your Python script, we first declare a mutable string `str`. We initialize it with the value "123 456 78" converted into a String type using the to_string() function.
Then we append another string "9!" to the original string using the push_str() method.
Finally, we print out the final value of the string variable `str` using the println!() macro and the {} placeholder for the string value.
