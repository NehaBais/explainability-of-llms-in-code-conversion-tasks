Here's how you can convert the C code to Rust.
Rust does not have boolean data type for integers like in C where 'int a' could mean either true or false. So I assumed that `a` and `b` are boolean values as per the problem statement. 
```rust
fn print_logic(a: bool, b: bool) {
    let a_and_b = a && b;
    println!("a and b is {}", a_and_b);
    
    let a_or_b = a || b;
    println!("a or b is {}", a_or_b);
    
    let not_a = !a;
    println!("not a is {}", not_a);
}
```
