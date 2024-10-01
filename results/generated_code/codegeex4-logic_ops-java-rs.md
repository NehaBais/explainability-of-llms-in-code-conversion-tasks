In Rust, the equivalent code would be:

```rust
pub fn logic(a: bool, b: bool) {
    println!("a AND b: {}", a && b);
    println!("a OR b: {}", a || b);
    println!("NOT a: {}", !a);
}

fn main() {
    logic(true, true);
}
```

In Rust, boolean values (`bool`) are capitalized. The `println!` macro is similar to the `System.out.println()` method in Java. In addition, the logical operators (&&, ||) and the not operator (!) work similarly to Java.

Note: This code will only compile and run if you have a main function that calls your logic function like I have done in the last line of the example.
