pub fn calculate_arithmetic(a: i32, b: i32) -> (i32, i32, i32, f64, i32, i32) {
    let sum = a + b;
    let difference = a - b;
    let product = a * b;
    let quotient = a as f64 / b as f64; // Performing division as float for accurate results
    let remainder = a % b; // This calculates the remainder using Rust's  '%' operator

    return (
        sum,
        difference,
        product,
        quotient,
        remainder,
        if a != 0 && b > 0 { a.pow(b as u32) } else { 1 },
    );
}
