Here is the Rust version of the provided C++ code: 
```rust
fn main() {
    let mut a = (match input("Enter first number:") { _ => return } ) as i32;
    let mut b = (match input("Enter second number:") { _ => return } ) as i32;

    println!("a+b = {}", &a + &b);
    println!("a-b = {}", &a - &b);
    println!("a*b = {}", a * b);
    if let result = &a / &b {
        println!("a/b = {}, remainder {}", result.to_string(), &result % b);
    } else {
        println!("Division by zero!") 
    };
}

fn input<T: std::ops::Add + FromStr>(msg: &str) -> Option<T> where T: std::clone::Clone + std::cmp::PartialOrd + std::fmt::Debug + FromStr, {
    let input = match read_line(std::process::stdout) { Some(s) => s.trim() };
    if let v = input.parse() {Some(v)} else {
        println!("{} is not a number!", input);
        None
    }
}
```
This code doesn't exactly match the original C++ version because Rust does not natively support division rounding towards zero or signs that differ between the two operands. Rust does support rounding to nearest, ties away from zero for `f64` and `f32` types, but this may not be directly translatable to other integer types. However, the closest approximation in Rust is achieved by using the `std::round()` function on a `f64` result after performing the operation itself and then taking the modulus if needed. This has the effect of "towards zero" rounding for integers, but the exact behavior may vary depending on the context. 
The error handling in Rust is also different from C++ as it uses match/Option for error handling.
