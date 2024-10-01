Sure, here's the Rust code that achieves the same functionality as the C++ code you provided:
```
fn main() {
 let my_strings = ["prepended to", "my string"];
 let prepended = my_strings.iter().fold(String::from(""), |a, b| a + b);
 println!("{}", prepended);
}
```
This Rust code uses the `iter()` method on the `my_strings` vector to iterate over its elements, and the `fold()` method to accumulate them into a single string. The initial value of the accumulator is an empty string, and the closure passed to `fold()` concatenates each element to the accumulator in turn. Finally, the resulting string is printed to the console using `println!()`.

