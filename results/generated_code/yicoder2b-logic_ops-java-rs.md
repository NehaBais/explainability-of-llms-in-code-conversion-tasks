Sure, here is the equivalent code in Rust.

```rust
fn logic(mut a: bool, mut b: bool) {
    let mut res1 = a && b;
    let mut res2 = a || b;
    let mut res3 = !a;
  
    println!("a AND b: {}", res1);
    println!("a OR b: {}", res2);
    println!("NOT a: {}", res3);
}
```
This Rust code does exactly the same thing as your Java code. It takes two boolean values and prints out the results of "and", "or" and "not" operations on both arguments as well as "not" on first argument.
