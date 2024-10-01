
Here's the Rust equivalent of the Go code you provided:
```
fn print_logic(a: bool, b: bool) {
    println!("a and b is {}", a && b);
    println!("a or b is {}", a || b);
    println!("not a is {}", !a);
}
```
The `print!` macro in Rust is similar to the `fmt.Println` function in Go, and it allows you to print values to the console with formatting options. The `&&` and `||` operators are also used for logical operations in Rust, just like they are in Go. Finally, the `!` operator is used for negation in Rust, which is similar to its meaning in Go.
