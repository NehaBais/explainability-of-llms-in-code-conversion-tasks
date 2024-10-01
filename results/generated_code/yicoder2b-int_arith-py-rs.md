Sure, here is the equivalent code in Rust. Note that, unlike Python, Rust does not have built-in exponentiation or division, so you will need to manually implement these operations if they are needed:

```rust
fn main() {
    let input1 = 18;
    let input2 = 7;

    let sum: i32 = *input1 as i32 + *input2 as i32;
    println!("Sum:		{}",sum);
    let difference: i32 = *input1 as i32 - *input2 as i32;
    println!("Difference: {} ",difference);
    let product: i32 = *input1 as i32 * *input2 as i32;
    println!("Product:	{}",product);

    let mut quotient: f64 = *input1 as f64 / *input2 as f64;
    quotient = (quotient as i32) + 0.5; // rounds towards zero
    println!("Integer quotient: {}", quotient as i32);
    println!("Float quotient: {:f}", quotient);
    let remainder: f64 = ((*input1 as f64 / *input2 as f64).abs() - quotient as f64) * (input1 > 0 as bool as f64 + input2 > 0 as bool as f64) * (-10.0);
    println!("Remainder: {}", remainder as i32);
    let exp_result: i32 = std::panicking::panic_abort!("Rust does not have built-in exponentiation or division operators"); // Unreachable code
}
```
Note that this rust version of the program will panic if you provide input1 and/or input2 as 0 because the quotient will be `inf`. To avoid this, add error checking to ensure your inputs are not zero.
