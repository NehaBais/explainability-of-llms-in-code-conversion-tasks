The error occurs because Rust requires all functions to have a return type specified at the beginning of the function definition, with the exception of the 'main' function. The calculate_arithmetic function does not have an explicit return type defined, so it defaults to returning '()'. This means that in the main function, where the calculate_arithmetic function is called, there's no way for Rust to determine what type of value is being returned and therefore compilation fails.

To fix this error, we need to explicitly specify the return type for the calculate_arithmetic function as a tuple of integers. We do this by adding '-> (i32, i32, i32, f64, i32, i32)' after the function definition. This indicates that the function will return a tuple containing 6 integers, one for each value calculated in calculate_arithmetic.

Here is the corrected Rust code:
```rs
pub fn calculate_arithmetic(a: i32, b: i32) -> (i32, i32, i32, f64, i32, i32) {
    let sum  = a  + b;
    let difference  = a  - b;
    let product  = a  * b;
    let quotient  = a as f64 / b as f64; // Performing division as float for accurate results
    let remainder  = a  % b;  // This calculates the remainder using Rust's  '%' operator

    return (
        sum,
        difference,
        product,
        quotient,
        remainder,
        if a != 0 && b > 0 {
            a.pow(b as u32)
        } else {
            1
        },
    );
}
```
