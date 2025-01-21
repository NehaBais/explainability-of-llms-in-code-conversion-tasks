The error occurs because Rust requires an entry point to execute code, main function is not found. In Rust, we typically call it from within a `main()` function or by using `cargo run` command which compiles and runs the program. However, in this case where there's no main function, you can use `println!("{}", logic(true, false));` to call the function directly.

The `println` macro is being called from within another function, not `main()`. That's why the Rust compiler is complaining about missing main function. However, if you want to use logic() as part of a larger program with user input or some other form of control flow, it would be better organized like this:

```rs
fn logic(a: bool, b: bool)  {
    println!("a AND b: {}", a && b);
    println!("a OR b: {}", a || b);
    println!("NOT a: {}", !a);
}

fn main() {
    logic(true, false);
}
```
This way the logic function can be tested separately but also called as part of your program structure. The Rust compiler will not complain about missing main function in this case.

