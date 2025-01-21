The error "main function not found" occurs because Rust does not have its own main function. In order to solve this issue, we will need to create our own `main` function in Rust. Here's how you can fix the error:

1. Create a new file named `dolphincoder7b-logic_ops-c-rs.rs`.
2. Open the newly created file and add the following code:
```rust
fn main() {
    print_logic(1, 0); // Replace the arguments with actual values if needed
}

fn print_logic(a: i32, b: i32) {
    println!("a and b is  {}", a && b);
    println!("a or b is  {}", a || b);
    println!("not a is  {}", !a);
}
```

3. Save the file and compile it using `rustc --edition=2018 --crate-type=bin`. This will create an executable binary named `dolphincoder7b-logic_ops-c-rs` which you can run using `./dolphincoder7b-logic_ops-c-rs`.

If you encounter any further issues, please feel free to ask!
