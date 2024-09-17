The following code in Rust can be used to compute the factors of a positive integer:
```rust
fn factors(num: i64) -> Vec<i64> {
    let mut n_factors = Vec::new();
    for i in 1..=(num as f64).sqrt().floor() as i64 {
        if num % i == 0 {
            n_factors.push(i);
            if num / i != i {
                n_factors.push(num / i);
            }
        }
    }
    n_factors.sort(); // numeric sort
    return n_factors;
}
```
To use this function, you can call `factors()` with the desired integer as an argument and get back a vector containing all of its factors in ascending order. The code uses the floor() method to round down floating-point numbers to integers.
