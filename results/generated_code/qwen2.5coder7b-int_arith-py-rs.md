Here is how you can convert the given Python code to Rust. Note that Rust does not have an exact equivalent of Python's float division that rounds towards zero, so it uses integer division for this part.

```rust
fn main() {
    let input1 = 18;
    let input2 = 7;

    let qq = input1 + input2;
    println!("Sum: {:?}", qq);
    
    let ww = input1 - input2;
    println!("Difference: {:?}", ww);

    let ee = input1 * input2;
    println!("Product: {:?}", ee);

    let rr = input1 / input2;
    println!("Integer quotient: {:?}", rr);

    let uu = input1 % input2;
    println!("Remainder: {:?}", uu);

    let yy = input1.pow(input2);
    println!("Exponentiation: {:?}", yy);
}
```

In Rust, the division of two integers gives an integer result (truncated towards zero) and there is no direct equivalent of Python's modulo operation. You can use the `%` operator for getting the remainder. The `pow()` method is used for exponentiation.

Also note that Rust requires explicit type conversion with some operations like converting to string using `to_string()`. This makes it more verbose than Python, but provides better control and safety.
