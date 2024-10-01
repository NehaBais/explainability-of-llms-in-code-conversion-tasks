 Here's the Rust equivalent of the C code you provided:
```
fn print_logic(a: bool, b: bool) {
    println!("a and b is {}", a && b);
    println!("a or b is {}", a || b);
    println!("not a is {}", !a);
}
```
Note that in Rust, the `bool` type represents a logical value that can be either `true` or `false`. The `&&` operator performs the "and" operation on two boolean values, while the `||` operator performs the "or" operation. The `!` operator is used to negate a boolean value, which corresponds to the "not" operation in C.

Also note that the `println!` macro is used to print a string with placeholders for variables. This is equivalent to the `printf` function in C.
