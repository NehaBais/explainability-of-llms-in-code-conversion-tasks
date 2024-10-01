Rust provides a powerful and flexible string interpolation feature that can make your code more concise and expressive. The following is the equivalent code in Rust:

```
use std::string::ToString;

fn main() {
    let original = "Mary had a X lamb.".to_string();
    let to_be_replaced = "X".to_string();
    let replacement = "little".to_string();

    let new_string = original.replace(original.find(&to_be_replaced).unwrap(), to_be_replaced.len(), &replacement);

    println!("String after replacement: {}", new_string);
}
```
In this Rust code, we use the `std::string::ToString` trait to convert strings into `String` type. We then define the variables for the original string, the variable that needs to be replaced, and the replacement value as `String` types.

We use the `find()` method of the `String` type to find the position of the substring that we want to replace in the original string, and then pass the position, the length of the substring, and the replacement value as arguments to the `replace()` method. The `replace()` method returns a new string with the replaced values.

Finally, we print the resulting string using the `println!` macro.
