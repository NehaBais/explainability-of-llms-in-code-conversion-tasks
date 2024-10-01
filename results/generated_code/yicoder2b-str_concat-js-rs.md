Sure, here's how you can do this in Rust:
```rust
fn main() {
    let mut s = String::from("hello");
    s.push_back(' '); // Add a space between "hello" and " there!"
    s.push_back('t');
    s.push_back('h');
    s.push_back('e');
    s.push_back('r');
    s.push_back('e');
    println!("{} there!", &s);
}
```
This code will print: `hello there!`

Please note that the `+` operation in JavaScript is used to concatenate strings while in Rust, you can just use the `push_back` method of the String type. 
Also remember to add the main function and call the `println!()` macro in order for this to work. The output from the code will be "hello there!".
