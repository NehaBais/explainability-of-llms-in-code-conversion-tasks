Here's the equivalent code in Rust:
```
fn print_logic(a: bool, b: bool) {
 println!("a and b is {}", a && b);
 println!("a or b is {}", a || b);
 println!("not a is {}", !a);
}
```
In Rust, the `&&` operator represents logical AND, the `||` operator represents logical OR, and the `!` operator represents logical NOT. The `println!` macro is used to print the output to the console. The `std::boolalpha` manipulator is not needed in Rust because booleans are printed as "true" or "false" by default.

