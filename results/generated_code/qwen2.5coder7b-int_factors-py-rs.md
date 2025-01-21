Here is the equivalent Rust code for your Python code:

```rust
use std::cmp;

fn factor(n: u32) -> Vec<u32> {
    let mut factors1 = Vec::new();
    let mut factors2 = Vec::new();
    
    for x in 1..=(n as f64).sqrt() as u32 {
        if n % x == 0 {
            factors1.push(x);
            factors2.push(n / x);
        }
    }

    if (n as f64).sqrt().powi(2) == n as f64 {
        factors1.push((n as f64).sqrt() as u32);
    }

    factors1.extend(factors2.iter().rev().cloned());

    factors1
}

fn main() {
    for &i in &[45, 53, 64] {
        println!("{}: factors: {:?}", i, factor(i));
    }
}
```

This code has the same functionality as your Python code. It computes all the factors of a given number `n` by iterating from 1 up to the square root of `n`. For each factor found, it pushes both the factor and its corresponding pair onto separate vectors. If `n` is a perfect square, it also adds the square root of `n` as a factor. Finally, it appends the factors in reverse order from the second vector onto the first vector before returning it.

Please note that Rust uses a different approach to iterate over ranges compared to Python. In this case, we use `1..=(n as f64).sqrt() as u32` to iterate from 1 up to and including the square root of `n`. We also need to cast `n` to `f64` before taking its square root because Rust's range syntax does not support floating-point numbers.
