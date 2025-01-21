 Sure! Here's the equivalent Rust code for the given C++ program:

```rust
use std::collections::BTreeSet;

fn generate_factors(n: i32) -> BTreeSet<i32> {
    let mut factors = BTreeSet::new();
    factors.insert(1);
    factors.insert(n);
    for i in 2..=((n as f64).sqrt() as i32) {
        if n % i == 0 {
            factors.insert(i);
            if i * i != n {
                factors.insert(n / i);
            }
        }
    }
    factors
}

fn main() {
    let sample_numbers = [3135, 45, 60, 81];

    for &number in &sample_numbers {
        let factors = generate_factors(number);
        println!("Factors of {:4} are: {:?}", number, factors);
    }
}
```

### Explanation:
1. **Generating Factors**:
   - The `generate_factors` function takes an integer `n` and returns a `BTreeSet<i32>`, which is a set that keeps its elements in order. This ensures the factors are sorted.
   - We start by inserting 1 and `n` into the set.
   - Then, we iterate from 2 to the square root of `n`. If `n % i == 0`, it means `i` is a factor, so we insert both `i` and `n / i` into the set.

2. **Main Function**:
   - We define an array `sample_numbers` containing the numbers to be factored.
   - For each number in `sample_numbers`, we call `generate_factors` and print the factors using Rust's `println!`.

### Notes:
- The use of `BTreeSet<i32>` ensures that the factors are sorted and unique.
- The syntax for inserting elements into a set is `factors.insert(...)`.
- The loop condition uses the square root to limit the number of iterations, similar to the C++ code.
