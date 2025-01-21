 Certainly! Below is the equivalent Rust code for the given JavaScript code:

```rust
fn main() {
    let mut s1 = String::from("Hello");
    s1.push_str(", World!");
    println!("{}", s1);
}
```

Explanation:
1. `let mut s1 = String::from("Hello");` - This line initializes a mutable string variable `s1` with the value "Hello".
2. `s1.push_str(", World!");` - This line appends ", World!" to the existing string in `s1`.
3. `println!("{}", s1);` - This line prints the contents of the string after the append operation.
