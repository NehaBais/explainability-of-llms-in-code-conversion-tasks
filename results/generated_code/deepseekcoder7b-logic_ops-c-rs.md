In Rust, the equivalent function would be written as follows. The return type of the function will be `()` because it doesn't produce any value to be returned (it just prints directly). Boolean values in Rust are represented by `bool` and the logic operators work similarly as in C:

```rust
fn print_logic(a: bool, b: bool) {
    println!("a and b is {}", a && b);
    println!("a or b is {}", a || b);
    println!("not a is {}", !a);
}

fn main() {
    print_logic(true, false);
}
```

This will output:

a and b is false
a or b is true
not a is false

