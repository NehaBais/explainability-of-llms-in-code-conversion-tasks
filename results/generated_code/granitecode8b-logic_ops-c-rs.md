Here's the equivalent code in Rust:
```
fn print_logic(a: bool, b: bool) {
 println!("a and b is {}", a && b);
 println!("a or b is {}", a || b);
 println!("not a is {}", !a);
}
```
Note that in Rust, logical values are represented by the `bool` type, and the `&&`, `||`, and `!` operators have the expected behavior for boolean values. The `println!` macro is used to format and print output to the console.

