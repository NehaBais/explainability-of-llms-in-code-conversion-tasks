Sure, here's the equivalent Rust code for the given function:
```
fn print_logic(a: bool, b: bool) {
 println!("a and b is {}", a && b);
 println!("a or b is {}", a || b);
 println!("not a is {}", !a);
}
```
This code defines a function `print_logic` that takes two boolean arguments `a` and `b`. It then uses the `println!` macro to output the results of "and", "or", and "not" operations on these arguments. The `std::boolalpha` feature is used to make the boolean values print as "true" and "false".

