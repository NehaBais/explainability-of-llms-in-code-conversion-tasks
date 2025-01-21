```rust
fn main() {
    let mut a: i32;
    let mut b: i32;

    println!("Enter two integers: ");
    std::io::stdin()
        .read_line(&mut a.to_string())
        .expect("Failed to read line");
    std::io::stdin()
        .read_line(&mut b.to_string())
        .expect("Failed to read line");

    let sum = a + b;
    let difference = a - b;
    let product = a * b;

    println!("{} + {} = {}", a, b, sum);
    println!("{} - {} = {}", a, b, difference);
    println!("{} * {} = {}", a, b, product);

    // Truncate towards 0
    let truncation_result: i32 = a / b;
    println!("{} / {} = {}", a, b, truncation_result);

    // Same sign as first operand or of the second operand
    let remainder_result = a % b;
    println!("{} %% {} = {}", a, b, if a.sign() == b.sign() { remainder_result } else { -remainder_result });
}
```

The Rust code follows many of the same principles as the Go version: it uses `std::io` to read user input and `println!` for printing output. The division (`/`) operator in Rust truncates towards 0, which is equivalent to the C++ requirement. The modulus (`%`) operator also has a similar behavior, but if the operands are of different signs, Rust will return the negative result.
