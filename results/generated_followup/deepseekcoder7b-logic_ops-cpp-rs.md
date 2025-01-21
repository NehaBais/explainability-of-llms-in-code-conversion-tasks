The error message indicates that there are two positional arguments ("a" & "b") expected for each print statement, but none were given. 

To correct this, we need to pass the corresponding operation names as strings in addition to the actual results of logical operations. Here's how you can fix the code:

```rs
fn print_logic(a: bool, b: bool) {
    println!("{} {} is {}", a, "and", a && b);
    println!("{} {} is {}", a, "or", a || b);
    println!("not of {} is {}", a, !a);
}
``` 

In the corrected code, I have passed the operation names as additional arguments to `println!` macro. This will make sure that two positional placeholders are used in each statement and every argument is handled appropriately. 

The "not of a" is performed using Rust's standard boolean representation (with `{}`). The expression inside `println!` automatically converts the `bool` value to its textual form before printing ("true" for `true`, "false" for `false`).

