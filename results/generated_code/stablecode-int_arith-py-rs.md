Here is the equivalent Rust code for your Python script. Please note that unlike Python, Rust does not support operator overloading like exponentiation or remainder (modulo). Instead, Rust provides built-in functions (`pow` and `rem`) to perform these operations.

```rust
fn main() {
    let input1 = 18;
    let input2 = 7;

    let sum = input1 + input2;
    println!("Sum: {}", sum);

    let difference = input1 - input2;
    println!("Difference: {}", difference);

    let product = input1 * input2;
    println!("Product: {}", product);

    // Rust's division operator always returns a floating-point number.
    // The following code demonstrates how to perform integer quotient and remainder in Python, which also works for integers in Rust.
    let quotient = input1 as f64 / input2 as f64;
    println!("Integer quotient: {}", quotient.floor() as i32);

    let remainder = input1 % input2;
    println!("Remainder: {}", remainder);


    // Exponentiation is not directly supported in Rust. 
    // However, you can use the `pow` function provided by Rust's standard library to perform exponentiation.
    let result_expo = (input1 as f64) .pow(input2 as i32));

    println!("Exponentiation: {}", result_expo));
}
```
This Rust code will provide the same output as your given Python script for all operations except exponentiation, where it uses Rust's built-in function to perform the operation.
