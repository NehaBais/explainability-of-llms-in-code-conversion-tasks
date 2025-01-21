 The error `E0601` is caused because there's no main function in Rust, where execution starts from. Adding a `main` function as entry point to the program is required for Rust. 

Fix:
```rs
fn main() {
    print_logic(true, false);
}

fn print_logic(a: bool, b: bool) {
    println!("a and b is {}", a && b);
    println!("a or b is {}", a || b);
    println!("not a is {}", !a);
}
```
In the above code, `main` function serves as entry point to your Rust program. This function calls the `print_logic` function and passes some boolean values as arguments to it. 

The `print_logic` function then prints out the result of "and", "or" and "not" operations on both logical inputs using Rust's inbuilt println! macro with formatted string literals.
