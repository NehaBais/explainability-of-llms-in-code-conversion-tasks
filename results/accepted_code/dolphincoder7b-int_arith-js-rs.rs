// Calculate sum, difference, product, quotient, remainder, and exponentiation of two numbers.
pub fn calculate_arithmetic(a: i32, b: i32) -> (i32, i32, i32, f64, i32, i32) {
    let sum = a + b;
    let difference = a - b;
    let product = a * b;
    let quotient = a as f64 / b as f64; // Performing division as float for accurate results
    let remainder = a % b; // This calculates the remainder using Rust's '%' operator
    let exponentiation = if a != 0 && b > 0 {
        (a as u32).pow(b as u32)
    } else {
        1
    };

    return (
        sum,
        difference,
        product,
        quotient,
        remainder,
        exponentiation,
    );
}
