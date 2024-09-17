To convert this JavaScript code to Rust, we can use the same approach, but instead of using `process.argv` and command-line arguments for input, we will create a function that takes two integers as parameters and returns the results of performing arithmetic operations on them:
```rust
// Calculate sum, difference, product, quotient, remainder, and exponentiation of two numbers.
pub fn calculate_arithmetic(a: i32, b: i32) -> (i32, i32, i32, f64, i32, i32) {
    let sum = a + b;
    let difference = a - b;
    let product = a * b;
    let quotient = a as f64 / b as f64; // Performing division as float for accurate results
    let remainder = a % b;   // This calculates the remainder using Rust's '%' operator
    let exponentiation = if a != 0 && b > 0 {
        (a as u32).pow(b as u32)
    } else {
        1
    };

    return (sum, difference, product, quotient, remainder, exponentiation);
}
```
We define the function `calculate_arithmetic` that takes two integers (`i32`) and returns a tuple containing:
- The sum of `a` and `b`.
- The difference of `a` and `b`.
- The product of `a` and `b`.
- The quotient obtained by dividing `a` by `b`, rounded towards zero if necessary.
- The remainder obtained by performing modulo division (`a % b`). This result sign matches the sign of `a` if they have different signs, otherwise it sign matches the sign of `b`.
- The exponentiation of `a` raised to the power of `b`. If either `a` or `b` is zero and `b` is positive, the result is 1 (as per Python behavior), otherwise, we calculate this value using Rust's built-in pow function.
We return all these results as a tuple in the order they are calculated.
In Rust, arithmetic operations automatically promote integers to floating point numbers when one of them is of float type, so we need to manually cast `a` and `b` to `f64` for division.
Finally, we use Rust's modulo operator (`%`) and exponentiation function (`pow` method) to perform the required calculations.
