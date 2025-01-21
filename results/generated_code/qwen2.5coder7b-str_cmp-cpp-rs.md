```rust
fn main() {
    // Case-sensitive comparisons.
    let a = String::from("1.2.Foo");
    let b = String::from("1.3.Bar");
    compare_strings(&a, &b);

    // Case-insensitive comparisons by folding both strings to a common case.
    let mut a_lower = a.clone();
    let mut b_lower = b.clone();
    a_lower.make_ascii_lowercase();
    b_lower.make_ascii_lowercase();
    compare_strings(&a_lower, &b_lower);

    // Numeric comparisons
    let num_a: f64 = a.parse().unwrap();
    let num_b: f64 = b.parse().unwrap();
    compare_numbers(num_a, num_b);
}

fn compare_strings(a: &str, b: &str) {
    println!("{} and {} are {} exactly equal.", 
              a, b, if a == b {""} else {"not "});
    
    println!("{} and {} are {} inequality.",
              a, b, if a != b {""} else {"not "});

    println!("{} is {} ordered before {}.",
              a, if a < b {""} else {"not "}, b);

    println!("{} is {} ordered after {}.", 
              a, if a > b {""} else {"not "}, b);
}

fn compare_numbers(num_a: f64, num_b: f64) {
    println!("\n{} and {} are {} exactly equal.",
              num_a, num_b, if num_a == num_b {""} else {"not "});
    
    println!("{} and {} are {} inequality.", 
              num_a, num_b, if num_a != num_b {""} else {"not "});

    println!("{} is {} ordered before {}.",
              num_a, if num_a < num_b {""} else {"not "}, num_b);

    println!("{} is {} ordered after {}.", 
              num_a, if num_a > num_b {""} else {"not "}, num_b);
}
```
In the Rust code provided above, we have the same functionality as in your C++ example. We use the `String` type for string comparisons and numeric types (`f64`) for numeric comparisons. For comparison operations, Rust's native operators like `==`, `!=`, `<`, `>` are used. The `make_ascii_lowercase()` method is used to convert strings to lowercase for case-insensitive comparisons.

Note that Rust does not automatically parse the string as a number if it contains non-numeric characters. This must be done manually using the `parse()` function. In this example, we assume the input can be parsed as an f64, but depending on the specific requirements of your program, you might need to handle errors or choose a different numeric type.
