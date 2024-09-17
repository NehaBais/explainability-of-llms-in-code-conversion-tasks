```rust
// Using type coercion
fn compare_numbers (a: i32, b: i32) {
    if a == b {
        println!("{} equals {}", a, b);
    }
    if a < b {
        println!("{} is less than {}", a, b);
    }
    if a > b {
        println!("{} is greater than {}", a, b);
    }
}

// Without using type coercion and using standards
// Written for browsers
// assumption of a and b are both integers if typeof test passes
fn compare_numbers(a: i32, b: i32) {
    match (a == b, a < b, a > b) {
        (true, _, _) => println!("{} equals {}", a, b),
        (_, true, _) => println!("{} is less than {}", a, b),
        (_, false, true) => println!("{} is greater than {}", a, b),
        _ => println!("{} and {} are not of the same type and cannot be compared.", a, b),
    }
}
```
