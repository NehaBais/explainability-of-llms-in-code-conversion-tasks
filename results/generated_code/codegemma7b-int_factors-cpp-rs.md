```rust
use std::collections::HashSet;

fn generate_factors(n: i32) -> HashSet<i32> {
    let mut factors = HashSet::new();
    factors.insert(1);
    factors.insert(n);

    for i in 2..=(n as f64).sqrt() as i32 {
        if n % i == 0 {
            factors.insert(i);
            factors.insert(n / i);
        }
    }

    factors
}

fn main() {
    let sample_numbers = [3135, 45, 60, 81];

    for number in sample_numbers {
        let factors = generate_factors(number);
        println!("Factors of {} are: {:?}", number, factors);
    }
}
```
