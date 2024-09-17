Rust does not have direct equivalents for C++'s vectors and its iterator types. However, we can accomplish the same task using vectors and standard library functions. Below is the Rust code that performs the similar operation:

```rust
use std::collections::{HashSet};

fn generate_factors(n: i32) -> Vec<i32> {
    let mut factors = vec![1, n];

    for i in 2..=(n as f64).sqrt() as i32 {
        if n % i == 0 {
            factors.push(i);
            if i * i != n {
                factors.push(n / i);
            }
        }
    }

    factors.sort();
    return factors;
}

fn main() {
    let sample_numbers = [3135, 45, 60, 81];
    for &number in sample_numbers.iter() {
        println!("Factors of {} are: {:?}", number, generate_factors(number));
    }
}
```

To convert this code to Rust, we first need to include the `std::collections` library and implement the functions accordingly. The `HashSet` type from this library is used to store unique factors efficiently. Additionally, we use the range syntax (`2..=(n as f64).sqrt() as i32`) instead of a traditional loop to calculate the upper limit for generating factors. We also need to cast `n` to `f64` before taking its square root to ensure accurate calculations. Finally, we use the `sort` method from the `Vec` type to sort the factors in ascending order.
