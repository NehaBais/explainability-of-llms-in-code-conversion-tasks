To convert the JavaScript code to Rust, you can use the following approach:
```
fn logic(a: bool, b: bool) {
    println!("a AND b: {}", a && b);
    println!("a OR b: {}", a || b);
    println!("NOT a: {}", !a);
}
```
Here, we have defined a function `logic` that takes two boolean values `a` and `b` as input. We use the Rust operators `&&`, `||`, and `!` to perform the logical operations and print the results using the `println!` macro.

Note that in Rust, you can only pass a single value to the `print!` macro, so we have to wrap the boolean values in parentheses to group them together. Also, since Rust does not have a built-in `print` function like JavaScript does, we use the `println!` macro instead to print the results to the console.
