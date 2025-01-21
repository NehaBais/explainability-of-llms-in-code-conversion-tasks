Error: The `replace()` method takes 2 arguments but 3 were supplied.
Fix: Remove the extra argument from the `replace()` method call.
Code:
```rs
use std::string::ToString;

fn main() {
    let original = "Mary had a X lamb.".to_string();
    let to_be_replaced = "X".to_string();
    let replacement = "little".to_string();

    let new_string = original.replace(
        original.find(&to_be_replaced).unwrap(),
        to_be_replaced.len(),
    );

    println!("String after replacement: {}", new_string);
}
```
