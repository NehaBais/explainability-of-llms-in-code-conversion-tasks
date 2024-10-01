Here's the equivalent Rust code for the given function:
```
fn print_logic(a: bool, b: bool) {
    println!("a and b is {}", a && b);
    println!("a or b is {}", a || b);
    println!("not a is {}", !a);
}
```
The main difference between Golang and Rust is that Golang uses `&&` and `||` for logical operators, while Rust uses `and` and `or`. Additionally, Rust has a shorthand for not (`!`).

